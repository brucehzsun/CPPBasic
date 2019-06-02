//
// Created by bruce on 2018/9/29.
//
#include <iostream>

using namespace std;

class Test {
public:
    //无参构造函数
    Test() {
        a = 0;
        b = 0;
        cout << "无参数构造函数" << endl;
    }

    //有参构造函数
    Test(int a, int b) {
        this->a = a;
        this->b = b;
        cout << "有参数构造函数，两个参数" << endl;
    }

    //有参构造函数
    Test(int a) {
        this->a = a;
        cout << "有参数构造函数，一个参数" << endl;
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

    ~Test() {
        cout << "析构函数执行" << endl;
    }

private:
    int a;
    int b;
};

int main() {
    //无参数构造函数
    Test t1;
    //Test t5();//错误

    //有参数构造函数
    Test t2(2, 1);//C++编译器自动调用构造函数
    Test t3 = 3;//C++编译器自动调用构造函数
    //=被功能性增强
    //Test t4 = (3, 4);//错误，输入的是最后一个值4；


    //手动调用构造函数
    Test t4 = Test(2, 1);//匿名对象

}
