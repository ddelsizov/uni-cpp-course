/*
Да се разработи програма на C++, която моделира списък с книги.
1. Създайте клас Book с:
    o Частни полета:
        заглавие на книгата;
        автор на книгата;
        година на издаване (цяло число);
        издателство;
    o Публични методи:
        Конструктор без параметри;
        Конструктор с параметри за инициализиране на полетата;
        Методи за достъп (за запис и четене) до всяко от полетата;
        Метод за извеждане на информация за книгата.
2. Създайте функция за въвеждане на няколко обекта от тип Book, в която:
    Се заделя памет за динамичен масив за съхраняване на данни за книгите
    (използвайте динамичо заделяне на памет);
    Се въвеждат данните за книгите.
3. Създайте функция за намиране и извеждане на броя на книгите, издадени от
определено издателство
4. В главната функция main():
    Създайте динамичен масив от обекти от тип Book и въведете данни за
    книгите (използвайте функцията от т.2).
    Изведете информацията за всички книги.
    Намерете и изведете заглавието на най-старата книга (най-малка година на
    издаване).
    Намерете и изведете броя на книгите, издадени от определено издателство
    (използвайте функцията от т.3)
*/

#include <iostream>
#include <string>
using namespace std;

class Book {
private:
  string title;
  string author;
  int publicationYear;
  string publisher;

public:
  Book() {
    title = "";
    author = "";
    publicationYear = 0;
    publisher = "";
  }

  Book(const string &title, const string &author, int publicationYear,
       const string &publisher) {
    this->title = title;
    this->author = author;
    this->publicationYear = publicationYear;
    this->publisher = publisher;
  }

  string getTitle() const { return title; }

  string getAuthor() const { return author; }

  int getPublicationYear() const { return publicationYear; }

  string getPublisher() const { return publisher; }

  void setTitle(const string &title) { this->title = title; }

  void setAuthor(const string &author) { this->author = author; }

  void setPublicationYear(int publicationYear) {
    this->publicationYear = publicationYear;
  }

  void setPublisher(const string &publisher) { this->publisher = publisher; }

  void displayInfo() const {
    cout << "Title: " << title << endl;
    cout << "Author: " << author << endl;
    cout << "Publication Year: " << publicationYear << endl;
    cout << "Publisher: " << publisher << endl;
    cout << "------------------------" << endl;
  }
};

Book *inputBooks(int &count) {
  cout << "Enter the number of books: ";
  cin >> count;

  cin.ignore();

  Book *books = new Book[count];

  for (int i = 0; i < count; i++) {
    string title, author, publisher;
    int year;

    cout << "\nEnter details for Book #" << (i + 1) << endl;

    cout << "Title: ";
    getline(cin, title);

    cout << "Author: ";
    getline(cin, author);

    cout << "Publication Year: ";
    cin >> year;
    cin.ignore();

    cout << "Publisher: ";
    getline(cin, publisher);

    books[i].setTitle(title);
    books[i].setAuthor(author);
    books[i].setPublicationYear(year);
    books[i].setPublisher(publisher);
  }

  return books;
}

int countBooksByPublisher(Book *books, int count, const string &publisher) {
  int bookCount = 0;

  for (int i = 0; i < count; i++) {
    if (books[i].getPublisher() == publisher) {
      bookCount++;
    }
  }

  return bookCount;
}

int main() {
  int bookCount;
  Book *bookList = inputBooks(bookCount);

  cout << "\n===== All Books Information =====" << endl;
  for (int i = 0; i < bookCount; i++) {
    bookList[i].displayInfo();
  }

  int oldestIndex = 0;
  for (int i = 1; i < bookCount; i++) {
    if (bookList[i].getPublicationYear() <
        bookList[oldestIndex].getPublicationYear()) {
      oldestIndex = i;
    }
  }

  cout << "The oldest book is: " << bookList[oldestIndex].getTitle()
       << " (Published in " << bookList[oldestIndex].getPublicationYear() << ")"
       << endl;

  string publisherToSearch;
  cout << "\nEnter a publisher to search for: ";
  getline(cin, publisherToSearch);

  int publisherBookCount =
      countBooksByPublisher(bookList, bookCount, publisherToSearch);
  cout << "Number of books published by " << publisherToSearch << ": "
       << publisherBookCount << endl;

  delete[] bookList;

  return 0;
}