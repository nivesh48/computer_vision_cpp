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
  a = 5;
  b = 2;
  int result;
  result = a + b;
  cout << "values of a after initialising: " << a << endl;
  return 0;
}