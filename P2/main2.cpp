/*
Lillian Tucker
10/12/22
CSCI 130

Description:
A program with a function named time() that has an integer parameter named seconds and three integer reference parameters named hours, mins, and secs. The function is to convert the passed number of seconds into an equivalent number of hours, minutes, and seconds. Using the reference parameters, the function should alter the arguments in the calling function.
  */
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

void time(int, int &, int &, int &); // initialize function

int main()
{
  // initilize values
  int seconds, hours, mins, secs;

  // prompt user to enter seconds

  cout << "Enter the number of seconds: \n";
  cin >> seconds;

  // function to convert
  time(seconds, hours, mins, secs);

  cout << "Seconds entered: " << seconds << endl;

  // output values
  cout << "Hours: " << hours << endl;
  cout << "Minutes: " << mins << endl;
  cout << "Seconds: " << secs << endl;

  return 0;
}

// define function
void time(int seconds, int &hours, int &mins, int &secs)
{
  hours = seconds/3600;
  mins = (seconds % 3600) / 60; 
  secs = (seconds % 3600) % 60;
  // the modulo "removes" the equivalent value of the larger time unit

}