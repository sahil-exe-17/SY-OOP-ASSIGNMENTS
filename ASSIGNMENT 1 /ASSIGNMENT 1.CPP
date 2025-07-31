
#include <iostream>
#include<string>
using namespace std;

class student
{
  int Roll_no;
  string name;
public:
  void accept()
  {
    cout<<"Enter name and roll no :";
    cin>>name>>Roll_no;
  }
  void display()
  {
    cout<<"Name:"<<name<<endl;
    cout<<"Roll No :"<<Roll_no<<endl;
  }
};

int main()
{
  student s1;
  s1.accept();
  s1.display();
  return 0;
}

#include<iostream>
#include<string>
using namespace std;

class Book {
public:
    string b_name;
    int b_price;
    int b_pages;

    void accept() {
        cout << "Enter book name, price and pages: ";
        cin >> b_name >> b_price >> b_pages;
    }

    void display() {
        cout << "Book name: " << b_name << endl;
        cout << "Book Price: " << b_price << endl;
        cout << "No of pages: " << b_pages << endl;
    }
};

int main() {
    Book b1, b2;

    b1.accept();
    b2.accept();

    if (b1.b_price > b2.b_price) {
        b1.display();
    } else {
        b2.display();
    }

    return 0;
}



#include <iostream>
using namespace std;

class Time {
public:
    int hours;
    int minutes;
    int seconds;

public:
    void accept() {
        cout << "Enter hours: ";
        cin >> hours;

        cout << "Enter minutes: ";
        cin >> minutes;

        cout << "Enter seconds: ";
        cin >> seconds;
    }

    int toSeconds() {
        return (hours * 3600) + (minutes * 60) + seconds;
    }

    void displaySeconds() {
        cout << "Total seconds: " << toSeconds() << endl;
    }
};

int main() {
    Time t;
    t.accept();
    t.displaySeconds();
    return 0;
}
