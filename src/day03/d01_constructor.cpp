//
// Created by bruce on 2018/9/29.
//
#include <iostream>

using namespace std;

class Test {
public:
    Test() {
        a = 0;
        b = 0;
    }

    Test(int a, int b) {
        this->a = a;
        this->b = b;
    }

    Test(int a) {
        this->a = a;
    }

    /**
     * 拷贝构造函数，赋值构造函数，
     * @param t
     */
    Test(const Test &t) {
        this->b = t.b;
        this->a = t.a;
        cout << "我是拷贝构造函数" << endl;
    }

private:
    int a;
    int b;
};

int main301() {
    //无参数构造函数
    Test t1;

    //有参数构造函数
    Test t2(2, 1);//C++编译器自动调用构造函数
    Test t3 = 3;//C++编译器自动调用构造函数
    //手动调用构造函数¬
    Test t4 = Test(2, 1);//匿名对象

}
