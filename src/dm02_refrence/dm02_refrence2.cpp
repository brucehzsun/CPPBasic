//
// Created by bruce on 2018/9/23.
//
#include <iostream>

using namespace std;

//复杂数据类型做引用
struct Teacher {
    char name[64];
    int age;
};

void printT(Teacher *pT) {
    cout << pT->age << endl;
    pT->age = 21;
}

void printT2(Teacher &pT) {
    cout << pT.age << endl;
    pT.age = 22;
}

void printT3(Teacher pT) {
    cout << pT.age << endl;
    pT.age = 33;
}

int main() {
    Teacher t1;
    t1.age = 20;

    printT(&t1);//指针
    printT2(t1);//别名
    printT3(t1);//形参，拷贝数据。
    cout << t1.age << endl;

    return 0;
}