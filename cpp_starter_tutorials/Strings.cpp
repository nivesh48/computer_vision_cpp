#include <iostream>
#include <string>

using namespace std;

void in_out_functions(string mystring3) {
  // entering string input from console using getline
  cout << "Enter the input string: " << endl;
  getline(cin, mystring3);
  // adding a character at the end with push_back() string member
  mystring3.push_back('s');
  cout << "After adding a character 's' to the string: " << mystring3 << endl;
  // removing the character at the end with pop_back() member
  mystring3.pop_back();
  cout << "After pop operation: " << mystring3 << endl;
  cout << "Lenght of string is: " << mystring3.length() << endl;
}

void capacity_functions(string mystring3) {
  // capacity operator outputs the memory allocated for the string variable in
  // bytes
  cout << "Capacity of the string is: " << mystring3.capacity() << endl;
  mystring3.resize(10);
  cout << "String after resizing to 10: " << mystring3 << endl;
  cout << "Before shrinking the new capacity: " << mystring3.capacity() << endl;
  mystring3.shrink_to_fit();
  cout << "After shrinking the new capacity: " << mystring3.capacity() << endl;
}

void iterator_functions(string str) {
  // string iterators begin(), ebd(), rbegin(), rend()
  // decleraing the string iterator
  string::iterator itf;
  // iterator is a pointer
  cout << "forward iterations" << endl;
  for (itf = str.begin(); itf != str.end(); itf++)
    cout << *itf << endl;
  string::reverse_iterator itr;
  cout << "reverse iterators" << endl;
  for (itr = str.rbegin(); itr != str.rend(); itr++)
    cout << *itr << endl;
}

void manipultor_functions() {
  // string members copy(), swap()
  string str1 = "This is the initial string";
  // declare a character array
  char arr[40];
  // copying contents of str to arr
  str1.copy(arr, 10, 0);
  cout << "After copying it to the character: " << arr << endl;
  string str2 = "This is the second array";
  cout << "Contents of first string before swapping: " << str1 << endl;
  cout << "Contents of second string before swapping: " << str2 << endl;
  str1.swap(str2);
  cout << "Contents of first string after swapping: " << str1 << endl;
  cout << "Contents of second string after swapping: " << str2 << endl;
}

int main() {
  string mystring = "This is a string tutorial file";
  string mystring2("This ia another way of initializing");
  string mystring3;

  cout << "----------in/out operations of strings----------" << endl;
  in_out_functions(mystring3);

  cout << "----------capacity operations of strings----------" << endl;
  capacity_functions(mystring2);

  cout << "----------iterator operations of strings----------" << endl;
  iterator_functions(mystring);

  cout << "----------manipultor operations of strings----------" << endl;
  manipultor_functions();

  return 0;
}