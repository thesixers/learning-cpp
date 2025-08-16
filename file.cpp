#include <iostream>
#include <cmath>

// using namespace std;
using namespace std;

int main()
{
   int file_size = 100;
   // we declare multiple variables on one line
   int a = 1, b = 2;
   int c = a;
   a = b;
   b = c;
   const double pi = 3.14;
   cout << pi * a  << std::endl;

   cout << "Hola Mundo" << endl
        << a << " " << b << endl
        << file_size;
   return 0;
}
