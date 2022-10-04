
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

void time(int, int &, int &, int &);

int main()
{
  int seconds, hours, mins, secs;

  cin >> seconds;

  time(seconds, hours, mins, secs);

  cout << "Seconds entered: " << seconds << endl;

  cout << "Hours: " << hours << endl;
  cout << "Minutes: " << mins << endl;
  cout << "Seconds: " << secs << endl;

  return 0;
}

void time(int seconds, int &hours, int &mins, int &secs)
{
  hours = seconds/3600;

}