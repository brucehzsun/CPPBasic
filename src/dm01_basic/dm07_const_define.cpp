//
// Created by bruce on 2018/9/23.
//
#include <iostream>

using namespace std;
/**
 * const常量是由编译器处理的，提供类型检查和作用域检查
 * #define 宏定义有预编译器处理，单纯的文本替换。
 * @return
 */

void fun1() {
#define a 10
    const int b = 20;//由作用域
//#undef a
}

void fun2() {
    cout << "a = " << a << endl;
//    cout << "a = " << b << endl;
}

int main() {
    fun1();
    fun2();
    return 0;
}