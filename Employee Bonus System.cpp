#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    string employeeName;
    double basicSalary;
    const int NUM_EMPLOYEES = 5;

    cout << fixed << setprecision(2);

    // Loop through 5 employees to capture salary and compute bonus
    for (int i = 1; i <= NUM_EMPLOYEES; ++i) {
        cin.ignore(); // Clear leftover newline before getline
        cout << "\n--- Employee " << i << " ---\n";
        cout << "Enter employee name: ";
        getline(cin, employeeName);

        cout << "Enter basic salary: ";
        cin >> basicSalary;

        double bonus = 0.05 * basicSalary;
        double totalSalary = basicSalary + bonus;

        cout << "Report for " << employeeName << ":\n";
        cout << "  Basic Salary : " << basicSalary << "\n";
        cout << "  Bonus (5%)   : " << bonus << "\n";
        cout << "  Total Salary : " << totalSalary << "\n";
    }

    return 0;
}