#ifndef MYCLASS_H
#define MYCLASS_H
#include <string>
#include <iostream>
#include "Course.h"

using namespace std;

// MyClass prototypes
class MyClass {
    public:
        MyClass(string name, Course course);
        string name; // => this is called a member variable, it is a variable that belongs to the class.
        
        void display() const;
        void changeName(string newName);

    private:
        string mainName;
        Course course;


    friend void logSomething(MyClass& myClass); // Friend function declaration, allows access to private members of MyClass
};



#endif // MYCLASS_H