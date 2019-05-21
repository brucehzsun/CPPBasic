//
// Created by bruce on 2018/9/23.
//
#include <iostream>

using namespace std;

//引用的地址是相同的
int main101() {
    int a = 10;
    int &b = a;
    //a 和b的地址是相同的；
    cout << "&a = " << &a << endl;
    cout << "&b = " << &b << endl;
    return 0;
}

//2.普通引用有自己的内存空间，和指针占的内存空间是一样的
struct Teacher {
    char name[64];//64
    int age;//8
    int &a;//8
    int &b;//8
};

int main() {
    cout << "size of Teacher :" << sizeof(Teacher) << endl;
}
//引用在C++内部是使用常量指针