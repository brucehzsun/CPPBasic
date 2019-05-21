//
// Created by bruce on 2018/9/24.
//
#include <iostream>

using namespace std;

/**
 * 内联函数：
 * 1.不能声明，必须和函数体实现在一起
 * 2.机械替换，没有压栈，跳转，返回。速度快，短小精悍
 * 3.写了inline，编译器未必一定执行内联操作。编译器拒绝会变成普通函数，只是一种请求
 * 4.宏代码片段，有预编译处理，
 * 5.没有写inline，编译器也可能变成内联操作
 * 6.不能循环，不能过多的条件判断，函数体不能过大，
 */
#define MYFUNC(a, b) ((a) < (b) ?(a):(b))

inline int myFunc(int a, int b) {
    return a < b ? a : b;
}

inline void printA() {
    int a = 10;
    cout << "a = " << a << endl;
}

int main1401() {
    printA();
    int a = 1;
    int b = 3;
    // int c = myFunc(++a, b);//2,3,2
    int c = MYFUNC(++a, b);//3,3,3(++a)<b?(++a):(b)

    cout << "a = " << a << ",b = " << b << ",c = " << c << endl;
    return 0;
}
