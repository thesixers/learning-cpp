#include <iostream>

using namespace std;

int main()
{
    int size = 0;
    cin >> size;

    int max {};
    int *arr = new int[size];

    for(int i = 0; i < size; i++){
        // collect the remaining input and 
        int input {};
        cin >> input;
        arr[i] = input;

        // check if the input is greater than the current max value
        if(input > max){
            max = input;
        }
    }

    cout << "The max value is: " << max << endl;

    for(int x = 0; x < size; x++){
        cout << arr[x] << endl;
    }

    return 0;
}