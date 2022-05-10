#include <iostream>
using namespace std;

int main() {
  // decleration of variables
  int a;
  float b;
  cout << "values of a before initialising: " << a << endl;
  // declaring multiple variables
  int c, d, e;
  // don't forget to check signed, unsigned - short, long, char etc,. the sizes
  // of the vaiables
  // by default, int is signed
  // initialization - type identifier = value;
  // int a = 1;
  // int a(1)
  a = 5;
  b = 2;
  int result;
  result = a + b;
  cout << "values of a after initialising: " << a << endl;
  cout << "Size of char : " << sizeof(char) << endl;
  cout << "Size of int : " << sizeof(int) << endl;
  cout << "Size of short int : " << sizeof(short int) << endl;
  cout << "Size of long int : " << sizeof(long int) << endl;
  cout << "Size of float : " << sizeof(float) << endl;
  cout << "Size of double : " << sizeof(double) << endl;
  cout << "Size of wchar_t : " << sizeof(wchar_t) << endl;
  return 0;
}