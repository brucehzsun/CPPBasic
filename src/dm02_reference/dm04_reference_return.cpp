//
// Created by bruce on 2018/9/23.
//
#include <iostream>

using namespace std;

int getAA1() {
    int a;
    a = 10;
    return a;
}

/**
 * 返回a的本身
 * @return
 */
int &getAA2() {
    int a;
//    static int a;//返回静态变量 ，使用引用去接，没有问题。否则乱码
    a = 10;
    return a;
}

//int & getAA3(){
//    int a;
//    a = 10;
//    return a;
//}
int test1() {
    int a1 = getAA1();
    int a2 = getAA2();

    //对应的内存空间已经释放；
    int &a3 = getAA2();

    cout << "a1 = " << a1 << endl;
    cout << "a2 = " << a2 << endl;
    cout << "a3 = " << a3 << endl;
    return 0;
}

//函数当左值
//返回变量的值
int g1() {
    static int a = 10;
    a++;
    return a;
}

//返回变量本身
int &g2() {
    static int a = 10;//第二次调用，静态变量重复定义，赋值无效；
    a++;
    cout << "g2 :" << a << endl;
    return a;
}

int test2() {
//    g1() = 100;//不可以，返回的是值
    g2() = 100;//可以。返回变量的本身,函数返回值是左值
    g2();

    return 0;
}

int main(){
    test1();
    test2();
}
