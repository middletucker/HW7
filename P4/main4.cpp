
#include <iomanip>
#include <iostream>

using namespace std;

int SpaceJunk();

int main() {
  int i, n, days;
  int junk[n];

  cin >> n;

  days = SpaceJunk();

  cout << days << endl;
}

int SpaceJunk() {
  int n, i, days, minimum;
  int junk[n];

  for (i = 0; i < n; i++) {
    cin >> junk[i];
  }

  minimum = junk[0];
  for (i = 0; i < n; i++) {
    if (minimum > junk[i]) {
      minimum = junk[i];
    }
  }

  for (i = 0; i < n; i++) {
    if (minimum == junk[i]) {
      break;
    }
    days++;
  }

  return days;
}