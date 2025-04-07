/*
Да се въведе едномерен масив A от N реални числа (N≤100). Всеки елемент на
масива да се умножи по неговия индекс: A[I]=A[I]*I.
*/

#include <iostream>

using namespace std;

int main() {
  int N;
  int A[100];

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

  cout << "Elements times indexes ( A[i] * i ): " << endl;
  for (int i = 0; i < N; i++) {
    cout << A[i] * i << endl;
  }

  return 0;
}
