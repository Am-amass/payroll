#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

// Define a struct to represent an employee
struct Employee {
    string name;
    double hourlyWage;
    int hoursWorked;
};

// Function to calculate the total pay for an employee
double calculatePay(Employee employee) {
    return employee.hourlyWage * employee.hoursWorked;
}

// Function to display the payroll information for all employees
void displayPayroll(vector<Employee> employees) {
    cout << "Payroll Information:" << endl;
    for (Employee employee : employees) {
        cout << "Name: " << employee.name << endl;
        cout << "Hourly Wage: $" << employee.hourlyWage << endl;
        cout << "Hours Worked: " << employee.hoursWorked << endl;
        cout << "Total Pay: $" << calculatePay(employee) << endl;
        cout << endl;
    }
}

int main() {
    vector<Employee> employees;

    // Ask the user how many employees they want to add
    int numEmployees;
    cout << "Enter the number of employees: ";
    cin >> numEmployees;

    // Add employees to the payroll
    for (int i = 0; i < numEmployees; i++) {
        Employee employee;
        cout << "Enter employee " << i + 1 << " information:" << endl;
        cout << "Name: ";
        cin >> employee.name;
        cout << "Hourly Wage: $";
        cin >> employee.hourlyWage;
        cout << "Hours Worked: ";
        cin >> employee.hoursWorked;
        employees.push_back(employee);
    }

    // Display the payroll information
    displayPayroll(employees);

    return 0;
}