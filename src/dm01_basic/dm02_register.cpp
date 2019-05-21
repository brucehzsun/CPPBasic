//
// Created by bruce on 2018/9/22.
//
#include <iostream>

using namespace std;

int main1() {
    //C++允许获取寄存器上的变量地址，c语言不支持
    //不定义register，编译器也会优化，在C++中register会无效
    register int a = 10;
    cout << "寄存器a的地址=" << &a << endl;
}

//Struct和class完成的功能是一样的。只是默认权限不通