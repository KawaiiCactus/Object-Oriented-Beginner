#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

struct employee_pay
{
    string name;
    int employee_num;
    double pay_rate;
    double hours;
    double gross_pay;
};
// main function
int main()
{
    employee_pay employee1;
    employee_pay employee2;

    cout << fixed << showpoint << setprecision(2);
    cout << "Name: ";
    getline(cin, employee1.name);

    cout << "Employee #: ";
    cin >> employee1.employee_num;

    cout << "Enter hours worked by this employee: ";
    cin >> employee1.hours;

    cout << "Enter hourly pay rate for " << employee1.name << endl; 
    cin >> employee1.pay_rate;

    employee1.gross_pay = employee1.hours * employee1.pay_rate;
    cout << "Gross pay: $" << employee1.gross_pay << endl;

    // cin ignore for cin input for employee2
    cin.ignore();

    cout << "Enter information for employee 2: ";
    // calculate pay for employee2
    cout << "Name: ";
    getline(cin, employee2.name);
    cout << "Employee #: ";
    cin >> employee2.employee_num;

    cout << "Enter the hours worked by this employee: ";
    cin >> employee2.hours;

    cout << "Enter the hourly pay rate for " << employee2.name << endl;
    cin >> employee2.pay_rate;

    // gross pay formuls for employees
    employee2.gross_pay = employee2.hours * employee2.pay_rate;

    cout << "Gross pay: $" << employee2.gross_pay << endl;
    return 0;
}