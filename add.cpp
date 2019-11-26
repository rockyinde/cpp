// operating with variables

#include <iostream>
using namespace std;

int main ()
{
  // declaring variables:
  int a, b;
  int c {3};
  int result;

  // process:
  a = 5;
  b = 2;
  a = a + 1;
  result = a - b;
  result += c;

  // print out the result:
  cout << result;

  // terminate the program:
  return 0;
}

