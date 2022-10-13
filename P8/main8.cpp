/*
Lillian Tucker
10/11/22
CSCI 130

Description:
First line of input contains two integers, N(1 <= N <= 1000), the length of the
message, and C(1 <= C <= 1,000,000,000), the number from the task description
above. The next line contains N positive integers smaller than or equal to C,
the message itself.
*/

#include <iomanip>
#include <iostream>

using namespace std;

int main() {
  int i, j, temp, N, C, count = 0;
  int num[N];

  cin >> N;
  cin >> C;

  for (i = 0; i < N; i++) {
    cin >> num[i];
    if (num[i] == C) {
      count++;
    }
  }
  int X = sizeof(num) / sizeof(num[0]);
  for (i = 0; i < N; i++) {
    temp = num[N];
    j = i - 1;

    while (j >= 0 && num[j] > temp) {
      num[j + 1] = num[j];
      j = j - 1;
    }
    num[j + 1] = temp;
    }
  for (i = 0; i < count; i++) {
    swap(num[N - count - i], num[N - i]);
  }
  for (i = 0; i < N; i++) {
    cout << num[i] << " \n";
  }
}