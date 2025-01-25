# Student Management Ststem by using C++

## Introduction
The Student Management System is a C++ project designed to demonstrate key programming concepts and principles such as Object-Oriented Programming (OOP), addresses, pointers, const variables, control statements, and sorting algorithms. This project provides a comprehensive example of how these concepts can be applied in a real-world scenario.

##Features
###Object-Oriented Programming (OOP) Principles: 
- **Encapsulation:**The `Student` class encapsulates student-related data and functions, providing a clear interface for interacting with student objects.
- **Inheritance:**The `Student` class inherits from the Person class, demonstrating code reuse and the extension of base class functionalities.
- **Polymorphism:**While not explicitly demonstrated in the current code, polymorphism can be implemented through virtual functions in derived classes, allowing for dynamic method binding.
###Const Variables:
The `studentID` is defined as a constant variable in the Student class, ensuring that the student ID remains immutable once assigned.

###Control Statements:
Various control statements such as if statements, for loops, and functions are used throughout the project to control the flow of the program and perform specific tasks.

###Pointers and Addresses:
Pointers are used to interact with `Student` objects, demonstrating how to access and manipulate object properties through memory addresses.

###Sorting Algorithm:
The Bubble Sort algorithm is implemented using nested `for` loops to sort student records by their IDs. This demonstrates the use of a sorting algorithm and control structures to organize data.
##Modular Design:
The project is structured using multiple classes (`Person`, `Student`, `StudentRecords`, `InputHandler`, `SortingHandler`), each with a clear responsibility. This modular design improves code readability, maintainability, and extensibility.
###User Interaction:
The `InputHandler` class handles user input for creating new student objects, allowing users to add student records interactively.
###Display Functions:
The `StudentRecords` class includes functions to display all student records, providing a clear and organized way to present data to the user.
###Vector Data Structure:
A `vector` is used to store student objects in the StudentRecords class. This dynamic array provides flexibility in managing an unknown number of student records.
##Conclusion
The Student Management System project showcases a comprehensive application of key programming concepts in C++. By incorporating OOP principles, const variables, control statements, pointers, sorting algorithms, and a modular design, the project provides a solid foundation for understanding and demonstrating your proficiency in C++ programming.
