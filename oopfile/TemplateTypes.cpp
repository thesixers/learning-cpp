#include <iostream>


using namespace std;

template <typename T, typename U>
class TemplateClass {
    public:
        T value;
        U value2;

        TemplateClass(T value, U value2) : value(value) {
            cout << "TemplateClass object created with value: " << value << " and value2: " << value2 << endl;
        }
};


template <typename T>
class Calculate{
    public:
        Calculate() {
            cout << "calculate created !!" << endl;
        }
        void add(T a, T b) {
            cout << "Result: " << a + b << endl;
        }
};

template < >
class Calculate<string> {
    public:
        void add(string a, string b) {
            cout << "Concatenating strings: " << a << " and " << b << endl;
        }
};

int main(){
    TemplateClass<string, int> stringObject("Hello, World!", 45);
    TemplateClass<int, string> intObject(42, "Forty Two");

    Calculate<string> newAdd;

    newAdd.add("me", "and you");
    // newAdd.add(4, 5);
}