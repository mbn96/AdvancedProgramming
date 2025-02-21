/*
 * A program that:
 *  1. Receives n integers
 *  2. Prints the number of positive integers
 *  3. Prints the sum of even numbers
 */
#include <iostream>

using namespace std;

int main() {
  int n, x, posCount = 0, evenSum = 0;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> x;
    if (x > 0) {
      posCount++;
    }
    if (x % 2 == 0) {
      evenSum += x;
    }
  }

  cout << posCount << ", " << evenSum << endl;
  return 0;
}
