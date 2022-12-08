//
// Created by bruce on 2018/9/23.
//
#include <iostream>

using namespace std;

//引用的地址是相同的,和指针不一样；更像是const 常量；
void reference_address() {
    int a = 10;
    int &b = a;
    //int &c = 20;
    //a 和b的地址是相同的；
    cout << "&a = " << &a << endl;
    cout << "&b = " << &b << endl;
}

//2.普通引用有自己的内存空间，和指针占的内存空间是一样的
//3.引用在C++内部是使用常量指针
struct Teacher {
    char name[64];//64
    int age;//8
    int &a;//8
    int &b;//8
    int *p;//8
};

/**
 * void f(int &a){
 *      a = 5;
 * }
 *
 * void f(int *const a){
 *      *a = 5;
 * }
 * 上面两个函数等价；
 * @return
 */
int main() {
    reference_address();
    cout << "size of Teacher :" << sizeof(Teacher) << endl;
}
//引用在C++内部是使用常量指针