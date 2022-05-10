#include <iostream>
using namespace std;

int global = 5;

void func() { int local = 10; }
// the scope of variable local is available within the "{"

int main() {
  cout << global << endl;
  cout << local << endl;
  // not declared error!
}