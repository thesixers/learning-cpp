#ifndef Animal_H
#define Animal_H
#include <string>
// #include <iostream>
// #include <ctime>

using namespace std;

class Animal{
    public:
        Animal();
        ~Animal();
    private:
    protected:
        string name;
        string color;
        float weight;
        int age;
        string species;
};

#endif