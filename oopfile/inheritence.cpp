#include <iostream>

using namespace std;

// A class whose properties and methods was inherited is called a base class or parent class.
// A class that inherits from another class is called a derived class or child class.
// The derived class inherits the properties and methods of the base class, and can also have its own properties and methods.

class Animal{
    public:
        Animal(string name, int noOfLegs, string type) : name(name), noOfLegs(noOfLegs), type(type) {
            cout << "Animal object created." << endl;
        }// Constructor

        ~Animal(){
            cout << "Animal object destroyed." << endl;
        };
        string name;
        int noOfLegs;
        

        void display() const {
            cout << "Animal Name: " << name << endl;
            cout << "Type: " << type << endl;
            cout << "No of Legs: " << noOfLegs << endl;
        }


        private:
        // Private member variables can be added here if needed.
        // For example, you could add a variable to store the animal's age or species.
        // Private members are not accessible outside the class, ensuring encapsulation.
        // This helps to protect the integrity of the class by preventing external code from modifying its internal state directly.
        // You can also add private methods to perform internal calculations or operations that should not be exposed to the outside world.
        // For example, you could add a method to calculate the animal's age based on its birth date.
        // These methods can be used internally within the class to perform tasks that are not meant to be accessed by external code.

        protected:
        // Protected members are accessible within the class and by derived classes.
        // You can add protected member variables or methods here that you want to be accessible to derived classes.
        // For example, you could add a protected method to calculate the animal's speed based on its leg length.
        // This allows derived classes to use these members while still keeping them hidden from external code.
        string type;


        // You can add more methods here as needed
        // For example, you could add a method to make the animal speak or perform some action.
};

class Dog : public Animal{
    public:
        Dog(string name, int noOfLegs) : Animal(name, noOfLegs, "dog") {
            cout << "Dog object created." << endl;
        }
        
        ~Dog() {
            cout << "Dog object destroyed." << endl;
        }
        
        void bark() const {
            cout << "Woof! Woof!" << endl;
        }

        // polymorphism example
        // This method overrides the display method of the base class Animal.
        // It provides a specific implementation for the Dog class.
        // When you call display on a Dog object, it will use this implementation instead of the one in Animal.
        // This is an example of method overriding, which is a key feature of polymorphism in C++.
        // Polymorphism allows you to define a method in a base class and provide a different implementation in a derived class.
        void display() const {
           cout << "My name is " << name << " and I am a " << type << "." << endl;
        }
};

int main()
{
    // cout << "This is the main function of inheritence.cpp" << endl;
    // cout << "This file is part of a C++ project demonstrating inheritance and class usage." << endl;

    // You can add more code here to demonstrate inheritance or other features as needed.
    // For example, you could create instances of classes defined in other files and call their methods.

    Dog myDog("Buddy", 4);
    myDog.bark();
    myDog.display();


    return 0;
}