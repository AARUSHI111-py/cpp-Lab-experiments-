Experiment 02: Bank Account Using Hierarchical Inheritance

Aim

To implement a class hierarchy using inheritance and demonstrate protected access specifiers and member functions in C++.

Theory

Inheritance is an important feature of C++ that allows one class to acquire the properties of another class.

In this program:

- "BankAccount" is the base class.
- "Savings" and "Current" are derived classes.
- The "protected" access specifier allows derived classes to access the variable "name".
- The "setName()" function is used to assign a name.
- The "show()" function displays the account details.

This program demonstrates Hierarchical Inheritance, where two derived classes inherit from one base class.

Algorithm

1. Start the program.
2. Create a base class named "BankAccount".
3. Declare a protected string variable "name".
4. Create a public function "setName()" to assign the name.
5. Create two derived classes named "Savings" and "Current".
6. Define the "show()" function in both derived classes.
7. Create objects of both derived classes in the main function.
8. Assign names using "setName()".
9. Display the account names using "show()".
10. Stop the program.

Program

Refer to "Experiment-02.cpp" in this repository.

Output

(In Output Section )

Conclusion

The program successfully demonstrates hierarchical inheritance in C++ using a base class and two derived classes, along with protected access specifiers and member functions.
