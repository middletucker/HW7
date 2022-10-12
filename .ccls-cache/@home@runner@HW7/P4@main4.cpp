/*
Lillian Tucker
10/12/22
CSCI 130

Description:
On the first line there is a single integer n(1<=n<=100,000) the number of days for which the launch license is valid. On the second line follows n integers between 0 and 10^9 where the i’th integer is the amount of space junk on the i’th day. The first day is day i = 0.
Output a single integer, the number of days Birk needs to wait before he launches his rocket.
  */
#include <iomanip>
#include <iostream>

using namespace std;
// initialize function
int SpaceJunk(int n);

int main() {
  // initialize variables and array
  int n, days;
  int junk[n];
  // input number of day
  cin >> n;

  // run function and assign to days
  days = SpaceJunk(n);

  // output
  cout << days << endl;
}

// define function
int SpaceJunk(int n) {
  // initialize variables and array
  int i, days, minimum;
  int junk[n];

  // gather input for array
  for (i = 0; i < n; i++) {
    cin >> junk[i];
  }

  // define minimum
  minimum = junk[0];
  // find smallest number in array and assign to minimum
  for (i = 0; i < n; i++) {
    if (minimum > junk[i]) {
      minimum = junk[i];
    }
  }
  // go through array again to find earliest variation (double values)
  for (i = 0; i < n; i++) {
    if (minimum == junk[i]) {
      break; // stop at earliest variation
    }
    // add to days until earliest variation is reached
    days++;
  }

  return days;
}