#include <iostream>

using namespace std;

int main()
{
    // z = x + 10 / 3y
    int x = 10;
    double y = 5;
    double z = (x + 10) / (3 * y);
    double state_tax = 4 / 100;


    cout << state_tax << endl
         << z;

    return 0;
}