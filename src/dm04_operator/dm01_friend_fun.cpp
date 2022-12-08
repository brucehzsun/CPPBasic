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

    //友元函数声明，可以访问private属性，类似于java的protect；
    friend void modifyA(A &a, int data);

    int getA() const {
        return this->a;
    }

private:
    int a;
};

/**
 * 友元函数修改了private属性；
 * @param a1
 * @param data
 */
void modifyA(A &a1, int data) {
    a1.a = data;
}


int main() {
    A a1(100);
  cout << "a = " << a1.getA() << endl;
  modifyA(a1, 200);
    cout << "a = " << a1.getA() << endl;
}
