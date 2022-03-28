// Implementation File
// Implement the abstract data type Employee
//
// Author: Brian Horner
// Edit History:
// 09/27/2021 Initial version
// 09/27/2021 Took existing Employee project and split into specification and implementation files
// 09/27/2021 Changed giveRaise and displayEmployee to give yearly salary
// 09/27/2021 Added getYearlySalary functionality
// 09/30/2021 Added destructor and changed salary types to doubles
// 10/08/2021 Code Refactoring and Comments

#include <string>
#include <iostream>
#include "Employee.h"

// Constructor
Employee::Employee(std::string firstName, std::string lastName, double monthlySalary)
: firstN{firstName}, lastN{lastName}{
    if (monthlySalary > 0 ){
        salary = monthlySalary;
    }
}


// -- Set funcs --

// Set first name
void Employee::setFirstname(std::string firstName) {
    firstN = firstName;
}

// Set last name
void Employee::setLastName(std::string lastName){
    lastN = lastName;
}

// Set salary
void Employee::setMonthlySalary(double monthlySalary){
    if (monthlySalary >= 0){
        salary = monthlySalary;
    } else {
        std::cout << "Monthly salary of " << monthlySalary << " is an invalid input." << std::endl;
    }
}

// -- Get funcs --

// Get first name
std::string Employee::getFirstName() const {
    return firstN;
}

// Get last name
std::string Employee::getLastName() const{
    return lastN;
}

// Get monthly salary
double Employee::getMonthlySalary() const{
    return salary;
}

// Get yearly salary
double Employee::getYearlySalary() const {
    double yearlySalary;
    yearlySalary = salary * 12;
    return yearlySalary;
}

// Function to display employee in a clean manner to the user
void Employee::displayEmployee() const{
//    int yearlySalary;
//    yearlySalary = Employee::salary * 12;
    std::cout << "\nEmployee: " << firstN <<" " << lastN << std::endl;
    std::cout << "Yearly Salary: $" <<Employee::getYearlySalary() << "\n" << std::endl;
}

// Function to give an employee a raise
void Employee::giveRaise(int raisePercent){
    if (raisePercent >= 0){
        int onePercentSalary;
        onePercentSalary = (salary / 100);
        salary = salary + (onePercentSalary * raisePercent);
        double yearlySalary;
        yearlySalary = salary * 12;
        std::cout << "Employee's new yearly salary is $" << yearlySalary << std::endl;
    }else if (raisePercent < 0){
        std::cout << "Invalid. Please enter a raise percent between 1 and 100." << std::endl;
    }else{
        std::cout << "Should not reach this error point. Consult developer for bug fixing." << std::endl;
    }
}

// Destructor
Employee::~Employee() {
    std::cout << Employee::getFirstName() << " " << Employee::getLastName() << " has been deleted from stack memory.\n";
}




