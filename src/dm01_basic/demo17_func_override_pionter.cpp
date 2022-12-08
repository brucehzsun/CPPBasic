//
// Created by bruce on 2018/9/24.
//

#include <iostream>

using namespace std;

//函数指针

void myFunc17(int a) {
    cout << "a:" << a << endl;
}

void myFunc17(int a, int b) {
    cout << "a:" << a << endl;
    cout << "b:" << b << endl;
}

void myFunc17(double a, double b) {
    cout << "a:" << a << endl;
    cout << "b:" << b << endl;
}

void myFunc17(char *p) {
    cout << "s:" << p << endl;
}

//函数指针
//声明一个函数类型
typedef void (myTypeFunc)(int a, int b);
//myTypeFunc *myFunc = NULL;//定义一个函数指针，这个指针指向函数的入口地址

//声明一个函数指针类型
typedef void (*myPTypeFunc)(int a, int b);
//myPTypeFunc fp = NULL;//通过函数指针类型 定义了一个函数指针

//定义一个函数指针 变量
void (*myVarPFunc)(int a, int b);

int main1701() {
    myPTypeFunc fp = NULL;//通过函数指针类型 定义了一个函数指针
    fp = myFunc17;

//    fp(1);
    fp(1, 2);

}