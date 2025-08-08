#include <iostream>
using namespace std;

class ClassB; 

class ClassA {
    int numA;
public:
    ClassA(int a) { numA = a; }
    friend int sum(ClassA, ClassB);
};

class ClassB {
    int numB;
public:
    ClassB(int b) { numB = b; }
    friend int sum(ClassA, ClassB);
};

int sum(ClassA a, ClassB b) {
    return a.numA + b.numB;
}

int main() {
    ClassA objA(20);
    ClassB objB(10);
    cout << "Sum = " << sum(objA, objB);
    return 0;
}


#include <iostream>
using namespace std;

class Number {
    int value;

public:
    Number(int v) {
        value = v;
    }
    void display() {
        cout << value << endl;
    }
    friend void swap(Number &a, Number &b);
};
void swap(Number &a, Number &b) {
    int temp = a.value;
    a.value = b.value;
    b.value = temp;
}

int main() {
    Number n1(10), n2(20);

    cout << "Before swap:" << endl;
    n1.display();
    n2.display();

    swap(n1, n2);

    cout << "After swap:" << endl;
    n1.display();
    n2.display();

    return 0;
}


#include <iostream>
using namespace std;

class Cube; 

class Box {
    int volume;
public:
    Box(int v) { volume = v; }
    friend void Greater(Box, Cube);
};

class Cube {
    int volume;
public:
    Cube(int v) { volume = v; }
    friend void Greater(Box, Cube);
};

void Greater(Box b, Cube c) {
    if (b.volume > c.volume)
        cout << "Box has greater volume\n";
    else if (c.volume > b.volume)
        cout << "Cube has greater volume\n";
    else
        cout << "Both have equal volume\n";
}

int main() {
    Box b(100);
    Cube c(120);
    Greater(b, c);
    return 0;
}


#include <iostream>
using namespace std;

class Complex {
    int real, imag;
public:
    void input() { cin >> real >> imag; }
    void display() { cout << real << "+" << imag << "i"; }
    friend Complex add(Complex, Complex);
};

Complex add(Complex c1, Complex c2) {
    Complex temp;
    temp.real = c1.real + c2.real;
    temp.imag = c1.imag + c2.imag;
    return temp;
}

int main() {
    Complex c1, c2, sum;
    cout << "Enter first complex number (real imag): ";
    c1.input();
    cout << "Enter second complex number (real imag): ";
    c2.input();
    sum = add(c1, c2);
    cout << "Sum = "; sum.display();
}






#include <iostream>
using namespace std;

class Student {
    string name;
    int m1, m2, m3;
public:
    void input() {
        cout << "Enter name of Student: ";
        cin >> name;
        cout << "Enter marks of 3 subjects: ";
        cin >> m1 >> m2 >> m3;
    }
    friend void Average(Student);
};

void Average(Student s) {
    cout << "Average = " << (s.m1 + s.m2 + s.m3) / 3.0;
}

int main() {
    Student s;
    s.input();
    Average(s);
    return 0;
}


#include <iostream>
using namespace std;

class Beta;
class Gamma;

class Alpha {
    int a;
public:
    void input() { 
        cout << "Enter value of Alpha: ";
        cin >> a;
    }
    friend void sum(Alpha, Beta, Gamma);
};

class Beta {
    int b;
public:
    void input() { 
        cout << "Enter value of Beta: ";
        cin >> b;
    }
    friend void sum(Alpha, Beta, Gamma);
};

class Gamma {
    int c;
public:
    void input() { 
        cout << "Enter value of Gamma: ";
        cin >> c;
    }
    friend void sum(Alpha, Beta, Gamma);
};

void sum(Alpha x, Beta y, Gamma z) {
    cout << "Sum = " << x.a + y.b + z.c << endl;
}

int main() {
    Alpha a;
    Beta b;
    Gamma c;
    
    a.input();
    b.input();
    c.input();
    
    sum(a, b, c);
}


#include <iostream>
using namespace std;

class Point {
    float x, y;
public:
    void input() {
        cout << "Enter X: ";
        cin >> x;
        cout << "Enter Y: ";
        cin >> y;
    }
    friend float distance(Point, Point);
};

float distance(Point p1, Point p2) {
    float dx = p2.x - p1.x;
    float dy = p2.y - p1.y;
    return dx * dx + dy * dy; 
}

int main() {
    Point p1, p2;
    cout << "First point:\n";
    p1.input();
    cout << "Second point:\n";
    p2.input();
    cout << "Distance squared = " << distance(p1, p2);
    return 0;
}


#include <iostream>
using namespace std;

class Audit; 

class BankAccount {
    float balance;
public:
    void input() {
        cout << "Enter account balance: ";
        cin >> balance;
    }
    friend void Account(BankAccount, Audit);
};

class Audit {
public:
    friend void Account(BankAccount, Audit);
};

void Account(BankAccount acc, Audit) {
    cout << "Auditing account...\n";
    cout << "Account balance = " << acc.balance << endl;
}

int main() {
    BankAccount acc;
    Audit a;
    acc.input();
    Account(acc, a);
    return 0;
}




