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
    int printA() {
        cout << "a = " << a << endl;
    }
};

int main() {
    Child c1;
    c1.printA();
}
