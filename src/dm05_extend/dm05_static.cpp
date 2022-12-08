//
// Created by bruce on 2019-07-13.
//
#include <iostream>

using namespace std;

class Parent {
public:
    int static a;
    int b;
};

//这句话非常重要，显式初始化
int Parent::a = 100;

class Child : Parent {
public:
    Child(int b) : Parent() {
        this->b = b;
    }

public:
    int printA() {
        cout << "a = " << a << endl;
        cout << "b = " << b << endl;
    }
    void setB(int b){
        this->b = b;
    }
};

int main() {
    Child c1{4};
    c1.printA();
    c1.setB(5);
    c1.printA();
}
