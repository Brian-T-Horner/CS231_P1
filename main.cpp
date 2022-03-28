// A program to manipulate some employee objects
//
// Author: Brian Horner
// Edit History:
// 09/27/2021 Initial version
// 09/27/2021 Split header file into specification and implementation file and cleaned up code to fit
// 09/30/2021 Added specific demonstration code for the employee objects functionality
// 10/08/2021 Code Refactoring and Comments

# include <iostream>
# include "Employee.h"



int main() {

    // Instantiating Employee Objects
     Employee emp1{"Brian", "Horner", 2000};
     Employee emp2{"Cami", "Mann", 4000};

     // Using employee objects display methods
     emp1.displayEmployee();
     emp2.displayEmployee();

     // Displaying employee objects first names
     std::cout << "Employee 1's First Name is: " << emp1.getFirstName() << "\n" << std::endl;
     std::cout << "Employee 2's First Name is: " << emp2.getFirstName() << "\n" << std::endl;

     // Displaying employee objects last names
     std::cout << "Employee 1's Last Name is: " << emp1.getLastName() << "\n" << std::endl;
     std::cout << "Employee 2's Last Name is: " << emp2.getLastName() << "\n" << std::endl;

    // Displaying employee objects monthly and yearly salaries
     std::cout << "Employee 1 " <<emp1.getFirstName() <<" " << emp1.getLastName() << " monthly salary is $" << emp1.getMonthlySalary()
     << " and their yearly salary is $" << emp1.getYearlySalary() << ".\n" << std::endl;

     std::cout << "Employee 2 " <<emp2.getFirstName() << " " <<emp2.getLastName() << " monthly salary is $" << emp2.getMonthlySalary()
     << " and their yearly salary is $" <<emp2.getYearlySalary() <<".\n" << std::endl;

     // Giving a ten percent raise to each employee object
     std::cout << "Giving each employee a 10 percent raise."<<std::endl;
     emp1.giveRaise(10);
     emp2.giveRaise(10);

     // Displaying the change to salary using the objects display methods
     emp1.displayEmployee();
     emp2.displayEmployee();

     // Displaying the change to salary using the getYearlySalary method
     std::cout <<"Employee 1's salary is $" <<emp1.getYearlySalary() << ".\n" <<std::endl;
     std::cout <<"Employee 2's salary is $" <<emp2.getYearlySalary() << ".\n" <<std::endl;

     // Displaying the set functions for first and last name
     std::cout << "Showing set functionality for last and first names." <<std::endl;
     emp1.setFirstname("Jack");
     emp2.setLastName("Horner");

     // Displaying the changes to the first and last names with display method
     emp1.displayEmployee();
     emp2.displayEmployee();

     // Showing catches for negative salary or raise
     std::cout << "Showing catches for invalid inputs of monthly salary and raise." << std::endl;
     emp1.setMonthlySalary(-1000);
     emp2.giveRaise(-10);

     // Displaying employees to show no changes were made with incorrect inputs
     emp1.displayEmployee();
     emp2.displayEmployee();

     //Deleting the employees from stack memory manually
     emp1.~Employee();
     emp2.~Employee();
     /*This does repeat the message outputted to the user. More than likely
      * because the memory is deallocated again at the end of program.
      */
}
