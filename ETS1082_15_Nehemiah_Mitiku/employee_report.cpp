#include <iostream>

using namespace std;

int main()
{
    string employeeName;
    double weeklyWorkingHours, bonusRate, baseSalary;
    double grossSalary, bonusPayment, netSalary;
    cout << "Enter employee name: ";
    cin >> employeeName;
    cout << "Enter weekly working hours: ";
    cin >> weeklyWorkingHours;
    cout << "Enter bonus rate: ";
    cin >> bonusRate;
    cout << "Enter base salary: ";
    cin >> baseSalary;
    bonusPayment = baseSalary * bonusRate;
    grossSalary = baseSalary + bonusPayment;
    netSalary = baseSalary * 0.8 + bonusPayment;
    cout << "Employee: " << employeeName << endl;
    cout << "Weekly working hours: " << weeklyWorkingHours << endl;
    cout << "Gross Salary: $" << grossSalary << endl;
    cout << "Bonus Payment: $" << bonusPayment << endl;
    cout << "Net Salary (after tax): $" << netSalary << endl;

    return 0;
}
