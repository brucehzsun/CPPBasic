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

/**
 * 指针传入；
 * @param pT 指针地址
 */
void printT(Teacher *pT) {
    cout << pT->age << endl;
    pT->age = 21;
}

/**
 * 引用传入；
 * @param pT 传入的是引用；
 */
void printT2(Teacher &pT) {
    cout << pT.age << endl;
    pT.age = 22;
}

/**
 * 形参传入，实际进行了拷贝操作；
 * @param pT
 */
void printT3(Teacher pT) {
    cout << pT.age << endl;
    pT.age = 33;
    //pT.name = "bbbbbbb";
}

int main() {
    Teacher t1;
    t1.age = 20;

    printT(&t1);//指针
    printT2(t1);//别名
    printT3(t1);//形参，拷贝数据。
    cout << "age="<<t1.age<<",name="<<t1.name << endl;

    return 0;
}