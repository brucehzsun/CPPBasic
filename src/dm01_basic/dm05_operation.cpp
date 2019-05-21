//
// Created by bruce on 2018/9/23.
//
#include <iostream>

using namespace std;

int main() {
    int a = 10;
    int b = 20;
    //三目运算符返回的是变量，c中返回的是值。
    (a < b ? a : b) = 30;
//    (a < b ? &a : &b) = 30;
    cout << "a = " << a << ", b = " << b << endl;
}
