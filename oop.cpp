#include <iostream>
#include <ctime>
#include <cstdlib>
#include "./oopfile/myclass.h"

using namespace std;

class Animal {
    public:
        string name;
        Animal(string name) {
            // Constructor can initialize members if needed
            name = name;
        }

        void changeName(string newName){
            name = newName;
            // cout << name << endl;
        }
};

int main()
{
    Animal animal("Leo");
    MyClass myClass("Example");
    cout << myClass.name << endl;
    cout << myClass.name << endl;

    animal.changeName("Tiger");

    cout << "Animal name: " << animal.name << endl;

    return 0;
}

// #ifndef & #define
// This is a simple C++ program that demonstrates the use of classes and constructors.
// The Animal class has a public member variable 'name' and a constructor that can be used to initialize it.
// In the main function, an instance of Animal is created, and its name is set and printed to the console.
// The program uses the standard namespace for convenience.

// Note: The code does not include destructors or any complex logic, as the focus is on demonstrating basic class usage in C++.

// -> => Selection Operator : used to access members of a class or structure.
// It is used to access members of a class or structure through a pointer.


/*
 Composure: this is the act of building complex systems(objects) using simple components(objects).

*/