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
