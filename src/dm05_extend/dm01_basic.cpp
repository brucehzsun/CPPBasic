//
// Created by bruce on 2019-07-13.
//
#include <iostream>

using namespace std;

class Parent {

public:
    void printNum() {
        cout << "a = " << this->a << endl;
        cout << "b = " << this->b << endl;
    }

private:
    int a;
    int b;
};

class Child : public Parent {
public:

private:
    int c;
};

int main() {
    Child c1;
    c1.printNum();
}