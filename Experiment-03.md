Experiment 03 – Constructors and Rule of 5

Aim

To implement a class demonstrating all constructor types (Default, Parameterized, Copy, Move) and apply the Rule of 5. Verify memory leaks using Valgrind.

Theory

Constructors are special member functions of a class that are automatically called when an object is created.

The different types demonstrated are:

1. Default Constructor: Initializes an object without arguments.
2. Parameterized Constructor: Initializes an object using arguments.
3. Copy Constructor: Creates a new object by copying another object.
4. Move Constructor: Transfers resources from one object to another.

The Rule of 5 consists of:

1. Destructor
2. Copy Constructor
3. Copy Assignment Operator
4. Move Constructor
5. Move Assignment Operator

In this experiment, dynamic memory allocation is performed using "new", and memory is released using "delete[]".

Algorithm

1. Start the program.
2. Create a class named "Student".
3. Declare a character pointer "name".
4. Implement the default constructor.
5. Implement the parameterized constructor.
6. Implement the copy constructor.
7. Implement the copy assignment operator.
8. Implement the move constructor.
9. Implement the move assignment operator.
10. Implement the destructor to release dynamically allocated memory.
11. Create objects in the "main()" function to demonstrate the constructors and assignment operators.
12. Execute the program and verify memory leaks using Valgrind.
13. Stop the program.

Program

Refer to "Experiment-03.cpp".

Output

Output screenshot will be uploaded in the "Outputs" folder.

Conclusion

Thus, the Student class was successfully implemented to demonstrate constructors and the Rule of 5. Dynamic memory management was performed using constructors, assignment operators, and the destructor.
