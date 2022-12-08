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

    //前置++
    friend Complex &operator++(Complex &c);

    //后置++
    friend Complex &operator++(Complex &c, int);

    //左移操作符号
    friend ostream &operator<<(ostream &cout, Complex &c);

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
    Complex &operator--(int) {
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
    c.a++;
    c.b++;
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

//重载左移操作符，便于打印
ostream &operator<<(ostream &cout, Complex &c) {
    cout << "开始打印" << endl;
    cout << "c.a = " << c.a << ",c.b = " << c.b;
    return cout;
}

int main() {
    Complex c1(1, 2);

    cout << "c1 = " << c1 << ", end" << endl;

}
