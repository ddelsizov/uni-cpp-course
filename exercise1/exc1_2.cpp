/*
Да се напише програма, която въвежда цяло число от 1 до 12 и извежда името на
съответния месец. В случай, че е въведено число извън този диапазон, програмата
да извежда съобщение за грешка. Да се работи с оператор за множествено
разклонение.
*/

#include <iostream>
#include <string>
using namespace std;

struct MonthInfo {
  string name;
};

int main() {
  int number;
  MonthInfo months[13];
  months[1].name = "January";
  months[2].name = "February";
  months[3].name = "March";
  months[4].name = "April";
  months[5].name = "May";
  months[6].name = "June";
  months[7].name = "July";
  months[8].name = "August";
  months[9].name = "September";
  months[10].name = "October";
  months[11].name = "November";
  months[12].name = "December";

  cout << "Enter number between 1 and 12: ";
  cin >> number;

  if (number >= 1 && number <= 12) {
    cout << months[number].name << endl;
  } else {
    cout << "Error, input number is not in the range 1 - 12." << endl;
  }
  return 0;
}