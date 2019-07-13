//
// Created by bruce on 2019-07-13.
//
#include <iostream>

using namespace std;

class Base1 {
public:
    Base1(int a) {
        this->a = a;
    }

    void printB1() {
        cout << "a = " << a << endl;
    }

private:
    int a;
};

class Base2 {
public:
    Base2(int b) {
        this->b = b;
    }

    void printB2() {
        cout << "b = " << b << endl;
    }

private:
    int b;
};

class C : public Base1, public Base2 {
public:
    C(int a, int b, int c) : Base1(a), Base2(b) {
        this->c = c;
    }

    void printC() {
        cout << "c = " << c << endl;
    }

private:
    int c;
};

int main() {
    C c1(1,2,3);
    c1.printB1();
    c1.printB2();
    c1.printC();
}