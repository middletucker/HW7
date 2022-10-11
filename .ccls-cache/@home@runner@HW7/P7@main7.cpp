/*
Lillian Tucker
10/11/22
CSCI 130

A program that stores the following resistance values in an array named resistance: 16, 27, 39, 56, and 81 with two arrays named current and power, each capable of storing five double-precision numbers. Using a for loop and a cin statement, the program accepts five user-input numbers in the current array when the program is run. The program stores the product of the values of the squares of the current array and the resistance array in the power array.
*/

#include <iomanip>
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  int resistance[5] = {16, 27, 39, 56, 81};
  double current[5], power[5];

  int resistanceT = 0;
  double currentT = 0, powerT = 0;

  for (int i = 0; i < 5; i++)
    {
      cin >> current[i];


      
      resistanceT = resistanceT + resistance[i];
      currentT = currentT + current[i];
      powerT = powerT + power[i];
    }

  
}