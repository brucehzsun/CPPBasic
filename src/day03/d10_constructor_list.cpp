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
    //列表构造函数，使用参数位置代表参数
    B(int m, int n) : a1(1), a2(2) {
        cout << "构造函数B" << endl;
    }

    //列表构造函数，使用参数名字
    B(int m, int n, int a1, int a2) : a1(a1), a2(a2) {
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
    A a2;
    A a1;
};

void mainPlayObject310() {
//    B b(1, 2);
    B(1, 2, 3, 4);
};

int main1001() {
    mainPlayObject310();
}
