#include <iostream>
#include <cstdlib>
#include <ctime>


using namespace std;

int main()
{
  /*
    WHAT WE WILL LEARN IN THIS LESSON
    *Built-in data types
    *Numbers
    *Boolean values
    *Characters and Strings
    *Arrays
  */

  /*
    Data types
    *short which takes 2 bytes
    *int   which takes 4 bytes
    *long  which takes 4 bytes
    *long long which takes 8 bytes

    *float which takes 4 bytes
    *double which takes 8 bytes
    *long double takes 8 bytes

    *bool takes 1 byte
    *char takes 1 byte

    *auto quesses the data type of the variable
    *brace initialization
  */

  short age = 22;
  int salary = 5000;
  auto fileSize = 100000L;

  const float pi = 3.14f;
  double price = 99.9;
  char letter = 'A';
  bool isCorrect = true;

  int number = 1'000'000;

  cout << number << endl;

  // int binaryNumber = 0b10101;
  int binaryNumber = 0b1001111;
  cout << binaryNumber << endl;

  int hexaNumber = 0xff;
  cout << hexaNumber << endl;


  //  Generating random numbers
  long secondsEllapsed = time(nullptr);
  srand(secondsEllapsed);
  int randomNumber = rand() % 11;
  cout << randomNumber << endl;

  /*
  *this is called the brace initializer 
    *it comes int handy in avoiding narrowing conversion:
      this is when we try to store a large number in a small data type like 1000000 which is an int in small
    *also when tryign to store a floating point value in a int
  */ 
  int num {1.2};
  cout << num << endl;

  return 0;
}