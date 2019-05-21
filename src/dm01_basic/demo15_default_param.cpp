//
// Created by bruce on 2018/9/24.
//
#include <iostream>

using namespace std;

/**
 * 默认参数都在后面
 * @param x
 */
void myPrint(int x = 3) {
    cout << "x = " << x << endl;
}

//函数占位参数
void func1(int a, int b, int) {
    cout << "a = " << a << ", b = " << b << endl;
}

//默认参数+占位参数
int func2(int a, int b, int = 0) {
    cout << "默认参数+占位参数：a = " << a << ", b = " << b << endl;
}

int main1501() {
    myPrint(4);
    myPrint();

//    func1(1, 2);出错，编译不通过
    func1(1, 2, 3);

    func2(1, 2, 3);
    func2(1, 2);
}
