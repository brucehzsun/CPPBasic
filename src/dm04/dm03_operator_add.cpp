//
// Created by bruce on 2019-07-06.
//
#include <iostream>

using namespace std;

class Complex {
public:
    Complex(int a, int b) {
        this->a = a;
        this->b = b;
    }

public:
    int getA() {
        return this->a;
    }

    int getB() {
        return this->b;
    }

    Complex operator-(Complex &other) {
        Complex tmp(this->getA() - other.getA(), this->getB() - other.getB());
        return tmp;
    }

private:
    int a;
    int b;
};

Complex operator+(Complex &c1, Complex &c2) {
    Complex temp(c1.getA() + c2.getA(), c1.getB() + c2.getB());
    return temp;
}

int main() {
    Complex c1(1, 2), c2(3, 4);

    Complex c3 = c1 + c2;

    cout << "+ c3.a = " << c3.getA() << ", c3.b = " << c3.getB() << endl;
    Complex c4 = c2 - c1;
    cout << "- c4.a = " << c4.getA() << ", c4.b = " << c4.getB() << endl;


}
