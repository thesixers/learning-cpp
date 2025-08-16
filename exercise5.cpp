#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
    srand(time(nullptr));
    short firstDice = rand() % 6;
    short secondDice = rand() % 6;

    cout << "First-dice: " << firstDice + 1 << endl;
    cout << "Second-dice: " << secondDice + 1 << endl;
    
    return 0;
}