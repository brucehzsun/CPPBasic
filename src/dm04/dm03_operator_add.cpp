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

private:
    friend Complex &operator+(Complex &c1, Complex &c2);

    friend Complex &operator++(Complex &c);

    friend Complex &operator++(Complex &c, int);

public:
    int getA() {
        return this->a;
    }

    int getB() {
        return this->b;
    }

    Complex &operator-(Complex &other) {
        Complex tmp(this->getA() - other.getA(), this->getB() - other.getB());
        return tmp;
    }

    Complex &operator--() {
        --this->a;
        --this->b;
        return *this;
    }

    /**
     * 后置--
     * @return
     */
    Complex& operator--(int) {
        Complex temp = *this;
        --this->a;
        --this->b;
        return temp;
    }

private:
    int a;
    int b;
};

Complex &operator+(Complex &c1, Complex &c2) {
    Complex temp(c1.a + c2.a, c1.b + c2.b);
    return temp;
}

Complex &operator++(Complex &c) {
    ++c.a;
    ++c.b;
    return c;
}

/**
 * 后置++
 * @param c
 * @return
 */
Complex &operator++(Complex &c, int) {
    Complex tmp = c;
    ++c.a;
    ++c.b;
    return tmp;
}

int main() {
    Complex c1(1, 2), c2(3, 4);

    Complex c3 = c1 + c2;

    cout << "+ c3.a = " << c3.getA() << ", c3.b = " << c3.getB() << endl;
    Complex c4 = c2 - c1;
    cout << "- c4.a = " << c4.getA() << ", c4.b = " << c4.getB() << endl;

    //++Complex;
    ++c1;
    cout << "++c1; c.a = " << c1.getA() << ", c.b = " << c1.getB() << endl;
    //--Complex;
    --c1;
    cout << "--c1; c.a = " << c1.getA() << ", c.b = " << c1.getB() << endl;

    Complex c5 = c1++;
    cout << "测试后置++ Complex c5 = c1++; c1.a = " << c1.getA() << ",c1.b = " << c1.getB() << endl;
    cout << "测试后置++ Complex c5 = c1++; c5.a = " << c5.getA() << ",c5.b = " << c5.getB() << endl;

    Complex c6 = c1--;
    cout << "测试后置-- Complex c6 = c1--; c1.a = " << c1.getA() << ",c1.b = " << c1.getB() << endl;
    cout << "测试后置-- Complex c6 = c1--; c6.a = " << c6.getA() << ",c6.b = " << c6.getB() << endl;


}
