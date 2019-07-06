//
// Created by bruce on 2019-07-06.
//
#include <iostream>

using namespace std;


class A {
public:
    A(int a) {
        this->a = a;
    }

    friend void modifyA(A &a, int data);

    int getA() {
        return this->a;
    }

private:
    int a;
};

void modifyA(A &a1, int data) {
    a1.a = data;
}


int main() {
    A a1(100);
    modifyA(a1, 200);
    cout << "a = " << a1.getA() << endl;
}
