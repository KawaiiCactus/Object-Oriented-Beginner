// Program pay roll shows use of struvtures:
#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

// Place structure before main!
struct pay_roll
{
    int employee_num;           // Holds employee's # 
    string name;                // Holds employee's name
    double hours;               // Holds numbers of hours employee worked
    double pay_rate;            // Hourly pay rate
    double gross_pay;           // Gross pay
};

// main function
int main()
{
    pay_roll employee;              // employee is a pay_roll structure

    // get employee's number:
    cout << "Enter employee's number: ";
    cin >> employee.employee_num;   // User input

    // Get employee's name
    cout << "Enter employee's name: ";
    cin.ignore();   // Skips remaining \n character
    // Use getliine
    getline(cin, employee.name);

    // Get hours employee worked:
    cout << "How many hours did the employee work?: ";
    cin >> employee.hours;

    // Get employee's hourly pay rate:
    cout << "What's the employee's hourly pay?: ";
    // user input with employee dot (.) operator and pay rate
    cin >> employee.pay_rate;

    // Calculates employee's gross pay (before taxes):
    // Formula is: employee.hours * employee.pay rate
    employee.gross_pay = employee.hours * employee.pay_rate;

    // Display employee's data
    cout << "Here's the employee's payroll data:\n";
    cout << "Name: " << employee.name << endl;
    cout << "Number: " << employee.employee_num << endl;
    cout << "Hours worked: " << employee.hours << endl;
    cout << "Hourly pay rate: " << employee.pay_rate << endl;
    // Using iomanip to format gross pay display!!!
    // otherwise will give you scientific notation output!!!
    cout << fixed << showpoint << setprecision(2);
    // gross pay display
    cout << "Gross pay is: $" << employee.gross_pay << endl;
    return 0;
}