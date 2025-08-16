#include <iostream>
using namespace std;

int meLoop(int num, bool condition){
    if(condition){
        cout << num << endl;
        num--;
        meLoop(num, num > 0);
    }

    return 0;
}

int main()
{
    // 


    // while loops
    int num = 5;
    while(num > 0){
        cout << num << endl;
        num--;
    }
    cout << num << endl;

    // do while loops
    int num2 = 5;
    do {
        cout << num2 << endl;
        num2--;
    }while (num2 > 0);
    cout << num2 << endl;

    // for loops
    for(int i = 0; i <= 5; i++){
        cout << i << endl;
        //break is used to stop the loop if a condition is met
        //continue is used to continue the loop from the next value there by skipping the currunt value
    }

    // recursion
    int num3 = 5;
    cout << meLoop(num3, num3 > 0) << endl;

    //Array
    int nums[] = {3, 5, 7, 2, 9};
    cout << nums[2] << endl; 

    //Arrays and loops
    for(int x = 0; x < 5; x++){
        cout << "nums value: " << nums[x] << endl;
    }

    // for-each
    for(double x:nums){
        cout << x << endl;
    } 

    return 0;
}