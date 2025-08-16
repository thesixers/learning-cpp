// area of a circle
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
 /*
  *this is a multi-line comment in c++
  * comments are used to display whys and hows
 */
 cout << "Enter circle reduis to get the area: ";

 int raduis;
 cin >> raduis;

 const double pi = 3.14;

 double circleArea = pi * pow(raduis, 2);

 cout << "the area of the circle is: " << circleArea << endl;

 return 0;
}