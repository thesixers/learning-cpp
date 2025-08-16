#include "Animal.h"
#include <iostream>

using namespace std;

// Implementation of the Animal class constructor
// This constructor can be used to initialize member variables if needed
// Currently, it does not initialize any member variables.
// You can add initialization logic here if required.

// Objects are destroyed when they go out of scope, or whenever the delete expression is applied to a pointer directed at an object of a class.

Animal::Animal(){
    // Constructor implementation can be added here if needed
    cout << "Animal object created." << endl;
};

// :: => this is the scope resolution operator, used to define a member function outside the class definition

Animal::~Animal() {
    // Destructor implementation can be added here if needed
    // This destructor is called when an object of the Animal class is destroyed
    // You can add cleanup logic here if required
    // Destructors can't have parameters and cannot be overloaded.
    // They are used to release resources or perform cleanup tasks.
    // For example, if you had dynamically allocated memory in the constructor, you would release it here.
    // In this case, we are just printing a message to indicate that the object is being destroyed.
    // Note: If you had allocated resources in the constructor, you would typically release them here.
    // For example, if you had allocated memory for a member variable, you would delete it here.
    cout << "Animal object destroyed." << endl;
};