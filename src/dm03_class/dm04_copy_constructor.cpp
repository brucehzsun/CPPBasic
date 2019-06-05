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

public:
    int getA() {
        return this->a;
    }

private:
    int a;
    int b;
};

int main() {
    Test t1(2, 1);

    //第一种拷贝构造函数
    Test t2 = t1;
    cout << "t2.a:" << t2.getA() << endl;

    //第二种拷贝构造函数
    Test t3(t1);
    cout << "t3.a:" << t3.getA() << endl;

}
