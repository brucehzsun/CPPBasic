//
// Created by bruce sun on 2022/12/6.
//
#include "iostream"

using namespace std;

class Parent {
public:
    //没有virtual关键词，一直调用父类函数 ，不会调用子类函数；
    virtual void print() {
        cout << "Parent print" << endl;
    }
};

class Child : public Parent {
public:
    void print() {
        cout << "Child print" << endl;
    }
};

int main() {
    Parent *p = nullptr;
    Parent p1;
    Child c1;

    p = &p1;
    p->print();

    p = &c1;
    p->print();
}