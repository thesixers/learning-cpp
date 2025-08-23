#include <iostream>
#include <string>
#include <printf.h>

using namespace std;

void display(string* first, string *last,string *middle){
    cout << *first << " " << *last << " " << *middle << endl;
}

void showname(string &str){
    cout << str << endl;
}

void display(int* arr, int size){
    cout << "{";
    for (int x = 0; x < size; x++){
        if(x == size-1) {
            cout << arr[x] << "";
        }else{
            cout << arr[x] << ", ";
        }
    }
    cout << "}" << endl;
}

// void 

int main()
{
    string firstName = "Nnamdi", lastName = "Amaga", middleName = "Joe";
    string name = firstName + " " + lastName + " " + middleName;
    int newArr[8] = {5, 10, 20, 30, 40};
    display(&firstName, &lastName, &middleName);
    showname(name);
    display(newArr, 5);

    int num = 0;

    while(true){
        cout << "Enter an integer or number eg(1,2,3,4) to be added to array" 
            << "\n" << "or enter '0' to end loop" << endl 
            << "Enter Number: ";
        cin >> num;

        if(num == 0) break;
        int arrLength = sizeof(newArr) / sizeof(newArr[0]);
        
        for(int i = 0; i < arrLength; i++){
            if(newArr[i] == 0) {
                newArr[i] = num;
                break;
            }
        }
        
        for(int x = 0; x < arrLength; x++) cout << newArr[x] << endl;

        cout << "Num " << num << " Has been added to the array" << "\n" << endl;

        if(newArr[arrLength-1] != 0){
            cout << "The Array is Full !!" << endl;
            break;
        }
    }
    
    
    return 0;
}