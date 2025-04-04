/*
Да се въведат стойности за елементите на едномерен масив от N цели числа
(N≤100). Да се намери минималният елемент на масива и неговият индекс.

*/

#include <climits>
#include <iostream>

using namespace std;

int main() {
  int N;
  int A[100];
  int minElement = INT_MAX;
  int minIndex = -1;

  cout << "Enter array size (N <= 100): ";
  cin >> N;

  if (N <= 0 || N > 100) {
    cout << "Invalid array size!" << endl;
    return 1;
  }

  cout << "Enter " << N << " integers:" << endl;
  for (int i = 0; i < N; i++) {
    cin >> A[i];
  }

  for (int i = 0; i < N; i++) {
    if (A[i] < minElement) {
      minElement = A[i];
      minIndex = i;
    }
  }

  cout << "The minimum element is: " << minElement << endl;
  cout << "Its index in the array is: " << minIndex << endl;

  return 0;
}