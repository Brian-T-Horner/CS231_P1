// Specification File
// Declaring the abstract data type Employee
//
// Author: Brian Horner
// Edit History:
// 09/27/2021 Initial Version.
// 09/27/2021 Took existing Employee project and split into specification and implementation files
// 09/27/2021 Added getYearlySalary function
// 09/30/2021 Added destructor and changed salary types to doubles
// 10/08/2021 Code Refactoring and Comments

#include <string>

#ifndef EMPLOYEE_H
#define EMPLOYEE_H

class Employee{

public:
    // Constructor
    Employee(std::string firstName, std::string lastName, double monthlySalary);

    // Destructor
    ~Employee();

    // Set funcs
    void setFirstname(std::string firstName); // Set first name
    void setLastName(std::string lastName); // Set last name
    void setMonthlySalary(double monthlySalary); // Set monthly salary

    // Get funcs
    std::string getFirstName() const; // Get employee first name
    std::string getLastName() const; // Get employee last name
    double getMonthlySalary() const; // Get employee monthly salary
    double getYearlySalary() const; // Get employee yearly salary

    //  funcs
    void displayEmployee() const; // Display Employee data in clean format
    void giveRaise(int raisePercent); // Give an employee a raise

private:
    // Employee Class Attributes
    std::string firstN;
    std::string lastN;
    double salary{0};
};

#endif