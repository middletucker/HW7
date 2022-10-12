/*
Lillian Tucker
10/11/22
CSCI 130

A program that stores the following resistance values in an array named
resistance: 16, 27, 39, 56, and 81 with two arrays named current and power, each
capable of storing five double-precision numbers. Using a for loop and a cin
statement, the program accepts five user-input numbers in the current array when
the program is run. The program stores the product of the values of the squares
of the current array and the resistance array in the power array.
*/

#include <cmath>
#include <iomanip>
#include <iostream>

using namespace std;

int main() {
  // initialize values and arrays
  int resistance[5] = {16, 27, 39, 56, 81};
  double current[5], power[5];

  int resistanceT = 0;
  double currentT = 0, powerT = 0;

  for (int i = 0; i < 5; i++) {
    // gather data for current array
    cout << "Enter value for current " << i + 1 << endl;
    cin >> current[i];

    // calculate power for each value in array
    power[i] = resistance[i] * pow(current[i], 2);

    //add up total for each data type
    resistanceT = resistanceT + resistance[i];
    currentT = currentT + current[i];
    powerT = powerT + power[i];
  }
  // output titles for table
  cout << left << setw(15) << "Resistance" << setw(15) << "Current" << setw(15)
       << "Power\n";
  // output all values in all arrays in form of table
  for (int j = 0; j < 5; j++) {
    cout << setw(15) << left << resistance[j] << setw(15) << current[j]
         << setw(15) << power[j] << endl;
  }
  // output total values
  cout << left << "Total: " << setw(8) << resistanceT << setw(15) << currentT
       << setw(15) << powerT << endl;
}