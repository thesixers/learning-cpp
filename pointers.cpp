#include <iostream>

using namespace std;

int main()
{
    string name = "Nnamdi";
    string *nameAdd = &name;


    int fixedSizeArr[5] = {1, 2, 3, 4, 5};

    for(int num:fixedSizeArr){
        cout << num << endl;
    }

    //dynamic memory

    int size = 5;
    int *dynamicArrAdd = new int[size];

    dynamicArrAdd[0] = 10;

    // delete[] dynamicArrAdd;


    cout << nameAdd << endl;
    cout << fixedSizeArr[4] << endl;
    cout << *dynamicArrAdd << endl;
}   