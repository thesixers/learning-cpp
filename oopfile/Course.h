#ifndef COURSE_H
#define COURSE_H
#include "myclass.h"

#include <string>


using namespace std;


class Course{
    public:
        Course(string courseName) : courseName(courseName) {
            cout << "Course created: " << courseName << endl;
        }
        
        void display() const {
            cout << "Course Name: " << courseName << endl;
        }

    private:
        string courseName;
};

#endif // COURSE_H

// This header file defines a Course class with a constructor that initializes the course name.
// The display method prints the course name to the console.
// The class uses the standard namespace for convenience.

// Note: The class does not include destructors or any complex logic, as the focus is on demonstrating basic class usage in C++.
// The constructor prints a message when a Course object is created, and the display method outputs the course name.

// The class is designed to be used in a C++ program that includes this header file.
// It can be instantiated with a course name, and the course name can be displayed using the display method.

// The class is simple and serves as an example of how to define a class in C++ with a constructor and a method.
// It can be extended with additional functionality as needed in a larger application.

// The class is defined with a public constructor and a public method for displaying the course name.
// The course name is stored as a private member variable, ensuring encapsulation.
// This design allows for easy creation and management of course objects in a C++ program.
// The class can be included in other files using the #include directive, and it is protected against multiple inclusions with include guards.