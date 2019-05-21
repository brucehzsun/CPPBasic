//
// Created by bruce on 2018/9/23.
//
#include <iostream>

using namespace std;

//引用的概念，属于c++语法，不是c语言的语法
//普通引用，必须要其他变量初始化
int refrence1() {
    int a = 10;

    int &b = a;//b是a的别名；
    b = 100;//相当于a等于100；

    cout << "a = " << a << endl;
    return 0;
}

//基础类型的引用
void myswap01(int a, int b) {
    int temp = 0;
    temp = a;
    a = b;
    b = temp;
}

void myswap02(int *a, int *b) {
    int temp = 0;
    temp = *a;
    *a = *b;
    *b = temp;
}

void myswap03(int &a, int &b) {
    int temp = 0;
    temp = a;
    a = b;
    b = temp;
}

int refrence2() {
    int x = 10;
    int y = 20;
    cout << "0 > x = " << x << ",y = " << y << endl;
    myswap01(x, y);//不起作用，是值传递
    cout << "1 > x = " << x << ",y = " << y << endl;
    myswap02(&x, &y);//正确，通过指针解决
    cout << "2 > x = " << x << ",y = " << y << endl;
    myswap03(x, y);//正确，通过引用解决值得传递
    cout << "3 > x = " << x << ",y = " << y << endl;
    return 0;
}


int main() {
    refrence1();
    refrence2();
}