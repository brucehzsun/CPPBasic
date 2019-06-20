//
// Created by bruce on 2018/10/11.
//
#include <iostream>

using namespace std;

class A {
public:
    A(int a) {
        this->a = a;
        cout << "构造函数A " << a << endl;
    }

    ~A() {
        cout << "~析构函数A " << a << endl;
    }

private:
    int a;

};

class B {
public:
    //列表构造函数，直接传入参数；
    B(int m, int n) : a1(1), a2(2), age(3) {
        cout << "构造函数B" << endl;
    }

    //列表构造函数，使用参数名字；与顺序无关
    B(int m, int n, int a1, int a2) : a1(a1), a2(a2), age(a2) {
        this->m = m;
        this->n = n;
        cout << "构造函数B" << endl;
    }

    ~B() {
        cout << "~析构函数B" << endl;
    }

private:
    int m;
    int n;
    //构造函数安装声明的顺序；
    A a2;
    A a1;
    const int age;
public:
    int getAge() {
        return this->age;
    }
};


int main() {
//        B b(11, 12);
    B b(11, 12, 13, 14);
    cout <<"age:"<< b.getAge() << endl;
}
