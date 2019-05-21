//
// Created by bruce on 2018/9/24.
//
//引用分类普通引用和常量引用
#include <iostream>

using namespace std;

int main1301() {
    //普通引用
    int a = 10;
    int &b = a;
    cout << "普通引用 b = " << b << endl;

    //常量引用 用变量初始化常量引用
    int x = 20;
    const int &y = x;
    cout << "常量引用 y = " << y << endl;

    //> 用字面量初始化常量引用
//    int &n = 32; //错误
    const int &m = 43;
    cout << "字面初始化：" << m << endl;
    return 0;
}

struct Teacher {
    string name;
    int age;
};

void printT(const Teacher &t) {
//    t.name = "temp";//错误；
    //常量引用 让 实参变量 拥有只读属性
    cout << "teacher = " << t.name << t.age << endl;
}

int main1302() {
    Teacher t1;
    t1.age = 11;
    t1.name = "teacher1";

    printT(t1);
}