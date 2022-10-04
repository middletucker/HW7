/******************************************************************************
 Description Global Variable Example: Falling Objects
*******************************************************************************/
#include <cmath>
#include <iostream>

using namespace std;

// Global Variables ********************************************
const double GRAVITY = 9.807;      // m/s^2
const double MperStoMPH = 2.23694; // 1 m/s = 2.23694 mph
bool Flag_END = 1;

/********************* Function Prototypes *********************/
double instantVelocity(double);
double metersPerStoMPH(double);
void time2Fall();
void time2Fall(double); // overloading of the time2Fall function

/***************************** Main ****************************/
int main() {

  // local variables to main
  double tm; // time in seconds
  double vi; // instantaneous velocity in m/s

  // Determine the instantaneous velocities until the user decides not to
  // continue
  do {
    cout << "Determine the speed of a falling oject after an elapsed time (t)."
         << endl;
    cout << "Enter t in seconds: ";
    cin >> tm;
    vi = instantVelocity(tm);
    cout << "The speed is " << vi << " m/s. " << endl;
    cout << "This is also " << metersPerStoMPH(vi) << " miles/hour. " << endl;

    // prompt to repeat
    cout << "Enter 0 to exit: ";
    cin >> Flag_END;
  } while (Flag_END);

  // Determine the time it takes for an obect to fall a certain distance.
  // note: the Empire State Building is 381 m tall.
  time2Fall();

  // The height of the Burj Khalifa in Dubai is 828 meters
  time2Fall(828.0);

  return 0;
}

/********************* Function Definitions ********************/
// this function solves the equation v = g*t
double instantVelocity(double t) {
  double v = GRAVITY * t;
  return v;
}

// this function converts m/s to mph
double metersPerStoMPH(double speedMetric) {
  return (speedMetric * MperStoMPH);
}

double Ebuilding = 381; // height of the empire state building in meters

// this function determines the time to fall from the empire state building
void time2Fall() {
  double t_fall;

  t_fall = sqrt((2 * Ebuilding) / GRAVITY);
  cout << endl;
  cout << "The time it takes for an item to fall to the ground from the"
       << endl;
  cout << "top of the Empire State Building is " << t_fall << " seconds."
       << endl;

  return;
}

// this function determines the time to fall from any building
void time2Fall(double bldg) {
  double t_fall2;

  t_fall2 = sqrt((2 * bldg) / GRAVITY);
  cout << endl;
  cout << "The time it takes for an item to fall to the ground from the"
       << endl;
  cout << "top of the Building is " << t_fall2 << " seconds." << endl;

  return;
}
