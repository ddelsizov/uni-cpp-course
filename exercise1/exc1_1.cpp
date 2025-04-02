/*
Като се знае, че една точка в равнината се описва с нейните координати (х и у),
да се напише програма, която определя и извежда на екрана в кой квадрант се
намира въведена от потребителя точка.
*/

#include <iostream>
using namespace std;

struct Point {
  int x;
  int y;
} Point;

int main() {
  cout << "x = ";
  cin >> Point.x;
  cout << "y = ";
  cin >> Point.y;

  if (Point.x > 0 && Point.y > 0)
    cout << "Q1";
  if (Point.x < 0 && Point.y > 0)
    cout << "Q2";
  if (Point.x < 0 && Point.y < 0)
    cout << "Q3";
  if (Point.x > 0 && Point.y < 0)
    cout << "Q4";
}