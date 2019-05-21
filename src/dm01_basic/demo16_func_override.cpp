//
// Created by bruce on 2018/9/24.
//
#include <iostream>

using namespace std;

void myPrint16(int a) {
    cout << "a:" << a << endl;
}

void myPrint16(char *p) {
    cout << "s:" << p << endl;
}

void myPrint16(int a, int b) {
    cout << "a:" << a << endl;
    cout << "b:" << b << endl;
}

//返回值不一样，不是重载
//int myPrint(int a, int b) {
//    cout << "a:" << a << endl;
//    cout << "b:" << b << endl;
//    return 0;
//}

/**
 * 名称相同，参数不一样（个数，类型）
 * 返回值不是判断函数重载的标准
 * @return
 */
int main1601() {
    int a = 10;
    int b = 20;

    myPrint16(a);
    myPrint16(a, b);
    myPrint16("aaaaa");
    return 0;
}
