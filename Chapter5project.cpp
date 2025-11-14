
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int startPopulation;
    double dailyIncreasePercent;
    int days;

    // Input: Starting population
    cout << "Enter the starting number of organisms (minimum 2): ";
    cin >> startPopulation;
    while (startPopulation < 2) {
        cout << "Error: Starting population must be at least 2.\n";
        cout << "Enter again: ";
        cin >> startPopulation;
    }

    // Input: Daily increase percentage
    cout << "Enter the average daily population increase (as a percentage): ";
    cin >> dailyIncreasePercent;
    while (dailyIncreasePercent < 0) {
        cout << "Error: Daily increase cannot be negative.\n";
        cout << "Enter again: ";
        cin >> dailyIncreasePercent;
    }

    // Input: Number of days
    cout << "Enter the number of days they will multiply (minimum 1): ";
    cin >> days;
    while (days < 1) {
        cout << "Error: Number of days must be at least 1.\n";
        cout << "Enter again: ";
        cin >> days;
    }

    // Display header
    cout << fixed << setprecision(2);
    cout << "\nDay\tPopulation Size\n";
    cout << "-------------------------\n";

    // Loop to calculate and display population for each day
    double population = startPopulation;
    for (int day = 1; day <= days; ++day) {
        cout << day << "\t" << population << endl;
        population += population * (dailyIncreasePercent / 100.0);
    }

    return 0;
}

