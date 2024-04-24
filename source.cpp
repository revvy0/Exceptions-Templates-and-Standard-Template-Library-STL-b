// Paul Shelley
// 4/24/24
// CIS 1202.501

#include <iostream>
using namespace std;

// function for float point types
template<typeName T>
T half(T value) {
  // insert code for returning value
  return value / static_cast<T>(2);
}

// Function for int types
int half(int value) {
  // insert code for returning int value
  return (value % 2 == 0) ? (value / 2) : ((value + 1) / 2);
}

int main() {
// insert code for testing functions
double a = 7.0;
float b = 5.0f;
int c = 3;

cout << half(a) << endl;
cout << half(b) << endl;
cout << half(c) << endl;
// mimic code from example to see if it works as it should
  return 0;
}
