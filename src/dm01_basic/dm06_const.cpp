//
// Created by bruce on 2018/9/23.
//
#include <iostream>

using namespace std;

struct Teacher {
    char name[64];
    int age;
};

int operatorTeacher01(const Teacher *pTeacher) {
//    pTeacher.age = 10;//错误，const修饰的不能被修改
    return 0;
}

int operatorTeacher02(Teacher *const pt) {
    pt->age = 10;//pt不能修改，但是pt指向的对象可以修改。
//    pt = null;//错误，指针变量本身不能被修改
    return 0;
}

int operatorTeacher03(const Teacher *const pt) {
//    pt->age = 10;//错误，指针指向的对象不能被修改。
//    pt = null;//错误，指针变量本身不能被修改
    return 0;
}

int main() {
//    const int a = 1;
//    int const b = 2;//两个相等
//
//    const int *c;//const修饰的是指针指向的内存空间不能被修改
//    int *const d;
//    const int *const e;

    //C++中const不能不改变值，C语言中可以改变。
    //const在编译器编译期间分配内存；？？存疑！
    const int a = 10;
    int *p = NULL;
    p = (int *) &a;
    *p = 20;

    cout << "const a = " << a << endl;
    cout << "*p = " << *p << endl;
    return 0;
}
