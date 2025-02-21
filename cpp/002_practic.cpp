/*
 * A program that:
 *  1. Receives some integers
 *  2. Stops when receives -10
 *  3. Prints the average of positive numbers
 */
#include <iostream>

using namespace std;

int main() {
  int x, posCount = 0, posSum = 0;
  do {
    cin >> x;
    if (x > 0) {
      posCount++;
      posSum += x;
    }
  } while (x != -10);

  cout << (float)posSum / posCount << endl;
  return 0;
}
