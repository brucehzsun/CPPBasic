//
// Created by bruce on 2019-07-13.
//
#include <iostream>

using namespace std;

class Parent {
public:
    int age;
};

class Base1 : public Parent {
public:
    Base1(int a) {
        this->a = a;
    }

    void printB1() {
        cout << "a = " << a << endl;
    }

    int a = 10;
private:

};

class Base2 : public Parent {
public:
    Base2(int b) {
        this->b = b;
    }

    void printB2() {
        cout << "b = " << b << endl;
    }

    int b;
    int a1 = 20;
private:

};

class C : public Base1, public Base2 {
public:
    C(int a, int b, int c) : Base1(a), Base2(b) {
        this->c = c;
    }

    void printC() {
        cout << "c = " << c << endl;
    }

    int c;
    int a2 = 30;
private:

};

int main() {
    C c1(1, 2, 3);
    c1.printB1();
    c1.printB2();
    c1.printC();
//    std::cout << c1.age << std::endl;
}