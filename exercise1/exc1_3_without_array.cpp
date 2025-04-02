/*
Да се напише програма, която въвежда n (n≤10) на брой реални числа по-малки от
100 и намира тяхното произведение.
*/

#include <iostream>
using namespace std;

int main() {
  int n;
  double number;
  double product = 1.0;

  do {
    cout << "Input n (n <= 10): ";
    cin >> n;

    if (n <= 0 || n > 10) {
      cout << "Invalid input, please input a number between 1 and 10" << endl;
    }
  } while (n <= 0 || n > 10);

  for (int i = 0; i < n; i++) {
    do {
      cout << "Input number " << (i + 1) << " (less than 100): ";
      cin >> number;

      if (number >= 100) {
        cout << "Input number bigger than 100, try again! " << endl;
      }
    } while (number >= 100);

    product *= number;
  }

  cout << "Product of the input: " << product << endl;

  return 0;
}