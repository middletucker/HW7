// Determine the values displayed by each cout statement in the following
// program:
#include <iostream>

using namespace std;

int firstnum = 10; // declare and initialize a global variable
void display();    // function prototype

int main() {
  int firstnum = 20; // declare and initialize a local variable
  cout << "\nThe value of firstnum is " << firstnum << endl;
  display();
  return 0;
}
void display(void) {
  cout << "The value of firstnum is now " << firstnum << endl;
  return;
}