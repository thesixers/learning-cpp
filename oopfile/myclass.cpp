#include "myclass.h"
#include <iostream>
// #include "Course.h"

using namespace std;

//  a member initialization list: used when one or more of the member variable being initialized is a constant(const)
MyClass::MyClass(string name, Course course): mainName(name), name(name), course(course) {

};

void MyClass::display() const {
    cout << "Name: " << name << endl;
    cout << "Main Name: " << mainName << "\n" << endl;
    course.display();
    // cout << "Course Name: " << course.courseName << endl; // Accessing private member directly is not allowed
    // Instead, use the display method of the Course class to show the course name.
    // cout << "Course Name: " << course.getCourseName() << endl; // If a getter method is available in Course class
    // Note: The courseName member variable is private, so it cannot be accessed directly outside the Course class.
}

void MyClass::changeName(string newName) {
    name = newName;
    display();
}

void logSomething(MyClass& myClass) {
    myClass.mainName = "Changed Main Name"; // This will not compile because mainName is const
    cout << myClass.mainName << ", THE log something function " << myClass.name << endl;
}

int main(){
    Course course("C++ Programming");
    MyClass myClass("Example", course);
    MyClass* myClassPtr = &myClass;

    myClassPtr->changeName("new Example ptr"); // using selection operator
    myClass.changeName("New Example");
    logSomething(myClass);

    return 0;
}