#include <iostream>
#include <ctime>


using namespace std;


void swap(int d, int f)
{
    int c {};
    c = d, d = f, f = c;
    cout << "swapped d: " << d << endl 
        << "swapped f: " << f << endl;
}


int main()
{
    int fiveInts[5] = {1, 2, 3, 4, 5};
    int* p = fiveInts; // Pointer to the first element of the array


    for(int i: fiveInts){
        cout << i << " ";
    }

    cout << endl;

    for(int x = 0; x < 5; x++){
        // cout << *(p + x) << " ";
        cout << *p++ << " ";
    }

    cout << endl;

    // using while loop
    cout << "[ ";
    int count = 4;
    while(count >= 0){
        // cout << count << " " << endl;
        if(count == 0){
            cout << *(p - 5 + count) << " ";
            break;
        }
        cout << *(p - 5 + count) << ", ";
        count--;
    }
    cout << "]" << endl;

    string star = "* ";
    cout << "Star pattern:" << endl;
    for(int x = 0; x < 5; x++){
        cout << star << endl;
        star += " * "; // Append another star
    }


    /* Task:
        *Given an array of 10 integers, use pointer arithmetic to:

            *Print every element

            *Sum the elements

            *Find the maximum element 
    */

    int arr3[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int *arr3Adress = arr3;
    int sumOfArr3 = 0;
    int arr3Max = 0;

    for(int y = 0; y < 10; y++){
        int value = *(arr3Adress + y);
        sumOfArr3 += value;
        if(value > arr3Max) arr3Max = value;
        cout << value << " ";
    }

    cout << endl 
        << "the sum total of numbers in arr3 is: " << sumOfArr3 << endl 
        << "The max number in arr3 is: " << arr3Max << endl;

    // Task:
    // Create a function that swaps two integers using pointers. Test it inside main()

    int d = 5, f = 10;
    
    swap(d, f);

    cout << "original d: " << d << endl 
        << "original f: " << f << endl;

    /* Task:
        *Ask the user for the number of elements, 
         dynamically allocate an array of that size using pointers, fill it with random numbers, and print it. 
    */

    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int* arr4 = new int[n];

    cout << "[ ";

    for(int g = 0; g < n; g++){
        int value = *arr4++ = g;
        if(g == (n - 1)){
            cout << value;
            break;
        }
        cout << value << ", ";
    }

    cout << " ]" << endl;

    return 0;
}