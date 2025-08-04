#include <iostream>
#include <string>
using namespace std;

class Book {
    string book_title;
    string author_name;
    float price;

public:
    void accept() {
        cout << "Enter Book Title: ";
        cin >> book_title;
        cout << "Enter Author Name: ";
        cin >> author_name;
        cout << "Enter Price: ";
        cin >> price;
    }

    void display() {
        cout << "\nBook Title: " << book_title << endl;
        cout << "Author Name: " << author_name << endl;
        cout << "Price: " << price << endl;
    }
};

int main() {
    Book b;
    Book* ptr = &b; 

    ptr->accept();
    ptr->display();

    return 0;
}






#include <iostream>
using namespace std;

class Student {
    int roll_no;
    float percentage;

public:
    void accept() {
        cout << "Enter Roll Number: ";
        cin >> this->roll_no;
        cout << "Enter Percentage: ";
        cin >> this->percentage;
    }

    void display() {
        cout << "\nRoll Number: " << this->roll_no << endl;
        cout << "Percentage: " << this->percentage << "%" << endl;
    }
};

int main() {
    Student s;
    s.accept();
    s.display();

    return 0;
}

