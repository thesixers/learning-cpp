#include <iostream>

using namespace std;

class chessPiece {
    public:
        chessPiece(string name, string color);
        string name;
        string color;

        void display();
};

chessPiece::chessPiece(string name, string color) : name(name), color(color) {};

void chessPiece::display(){
    // there are three ways to access member variables in C++:
    // 1. using the dot operator (.) => (*this).name
    // 2. using the arrow operator (->) for pointers to objects => this->name

    // using the normal way 
    cout << "Name: " << name << endl;
    cout << "Color: " << color << endl;

    // using the pointer way
    cout << "Name: " << this->name << endl;
    cout << "Color: " << this->color << endl;

    // using the dereference operator
    cout << "Name: " << (*this).name << endl;
    cout << "Color: " << (*this).color << endl;

    // Note: The 'this' pointer is an implicit pointer that points to the current object.
    // It is used to access members of the class from within member functions.
};


// an operator overloaded class
class Church{
    public:
    Church(string name, int members) : name(name), members(members) {
        cout << "Church created: " << name << " with " << members << " members." << endl;
    }

    string name;
    int members;
    void display(){
        cout << "The " << (*this).name << " church has " << this->members << " members" << endl;
    }

    // operator overloading
    Church operator+(const Church& secondChurch){
        string name = this->name + " and " + secondChurch.name;
        int combinedMembers = (*this).members + secondChurch.members;
        return Church(name, combinedMembers);
    }

};



int main(){

    chessPiece piece("Knight", "Black");
    chessPiece* piecePtr = &piece;

    piecePtr->display(); 


    // testing operator overloading
    Church church1("Assemblys", 50);
    Church church2("Christ Embassy", 100);
    Church combined = church2 + church1;

    cout << combined.name << endl;
    
    return 0;
}