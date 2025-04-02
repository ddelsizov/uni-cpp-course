/*
Да се напише програма, която въвежда n (n≤10) на брой реални числа по-малки от
100 и намира тяхното произведение.
*/

#include <iostream>
using namespace std;

int main() {

  int n;
  double numbers[10];
  double product = 1.0;

  do {
    cout << "Input n (n<=10): ";
    cin >> n;

    if (n <= 0 || n > 10) {
      cout << "Too much " << endl;
    }
  } while (n <= 0 || n > 10);

  for (int i = 0; i < n; i++) {
    do {
      cout << "Enter number " << (i + 1) << " (less than 100): ";
      cin >> numbers[i];

      if (numbers[i] >= 100) {
        cout << "Less than 100 " << endl;
      }

    } while (numbers[i] >= 100);

    product *= numbers[i];
  }
  cout << "Product = " << product << endl;

  return 0;
}