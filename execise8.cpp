#include <iostream>
#include <ctime>

using namespace std;

void sortAcc(){
    
}

int main()
{
    int newArray[20] = {34, 12, 5, 78, 3, 67, 89, 23, 45, 10, 9, 11, 2, 99, 56, 1, 8, 19, 30, 4};
    int reversedArray[20];
    
    int avarage = 0;
    int sumOfArray = 0;
    int max = newArray[0];
    int min = newArray[0];

    // loop through it and add
    for (int i = 0; i < 20; i++)
    {
        sumOfArray += newArray[i];

        if (newArray[i] > max)
        {
            max = newArray[i];
        }

        if (newArray[i] < min)
        {
            min = newArray[i];
        }
    }

    // reverse the array
    for(int x = 19; x >= 0; x--){
        reversedArray[19 - x] = newArray[x];
    }

    // loop the reversed array
    cout << "[ ";
    for(int a: reversedArray){
        cout << a << " ";
    }
    cout << "]" << endl;

    int count = 0;
    int startTime = time(0);

    cout << "Sorting array..." << endl;

    //sort array accending order
    for(int k = 0; k < 20; k++){
        for(int a = 0; a < 20; a++){
            if(newArray[k] < newArray[a]){
                int temp = newArray[k];
                newArray[k] = newArray[a];
                newArray[a] = temp;
            }
            count++;
        }
    }

    double endTime = time(0);
    cout << "Time taken: " << endTime - startTime << " seconds" << endl;
    cout << "Sorting done!" << endl;
    cout << count << " iterations" << endl;

    cout << "[ ";
    for(int a: newArray){
        cout << a << " ";
    }
    cout << "]" << endl;


    avarage = sumOfArray / 10;

    cout << "Sum of array: " << sumOfArray << endl;
    cout << "Average of array: " << avarage << endl;
    cout << "Max of array: " << max << endl;
    cout << "Min of array: " << min << endl;

    return 0;
}
