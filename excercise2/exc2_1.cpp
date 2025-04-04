/*
Да се въведе едномерен масив А от N цели числа (N≤100). Да се намери
средноаритметичната стойност на всички елементи на масива, които са четни числа.
*/

#include <iostream>
using namespace std;

int main() {
  int N;
  int A[100];
  double sum = 0.0;
  int count = 0;
  double average;

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
    if (A[i] % 2 == 0) {
      sum += A[i];
      count++;
    }
  }

  if (count > 0) {
    average = sum / count;
    cout << "The average of the even numbers is: " << average << endl;
  } else {
    cout << "There are no even numbers in the array!" << endl;
  }

  return 0;
}