// fehrenheit to celcius converter
#include <iostream>

using namespace std;

int main()
{
    cout << "Fehrenheit: ";
    int fehrenheit;
    cin >> fehrenheit; 

    double celcius = (5.0/9.0) * (fehrenheit - 32) ;
    cout << "The temprature in celcius is: " << celcius << endl;

    return 0;
}