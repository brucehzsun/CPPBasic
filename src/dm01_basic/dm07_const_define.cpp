//
// Created by bruce on 2018/9/23.
//
#include <iostream>

using namespace std;

void fun3() {
//    cout << "a = " << a << endl;
//    cout << "a = " << b << endl;
}

/**
 * const常量是由编译器处理的，提供类型检查和作用域检查
 * #define 宏定义有预编译器处理，单纯的文本替换。
 */
void fun1() {
#define a 10
    const int b = 20;//由作用域
//卸载宏定义 a；
//#undef a
}

void fun2() {
    cout << "a = " << a << endl;
//    cout << "a = " << b << endl;
}

int main() {
    fun1();
    fun2();

    const int c =  10;
    const int b = 20;
    int arry[c+b];
    cout << "arry = "<<sizeof(arry)<<endl;

    return 0;
}