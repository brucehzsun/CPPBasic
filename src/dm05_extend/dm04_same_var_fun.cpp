//
// Created by bruce on 2019-07-13.
//
#include <iostream>

using namespace std;

class Parent {
public:
    int a;
    int b;

    void printParentB() {
        cout << "printParentB b = " << this->b << endl;
    }

    void print() {
        cout << "调用父类打印函数" << endl;
    }
};

class Child : public Parent {
public:
    int b;
    int c;

    void printChildB() {
        cout << "printChildB b = " << this->b << endl;
    }

    void print() {
        cout << "调用子类打印函数" << endl;
    }
};

int main() {
    Child c1;
    c1.b = 100;
    c1.printParentB();
    c1.printChildB();
    c1.print();

    c1.Parent::b = 200;
    c1.printParentB();
    c1.printChildB();
    c1.Parent::print();
    c1.Child::print();
}

