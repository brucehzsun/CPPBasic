//
// Created by bruce on 2018/10/8.
//
#include <iostream>

using namespace std;

class Test34 {
public:
    Test34(int a, int b) {
        this->a = a;
        this->b = b;
    }

    Test34(const Test34 &obj) {
        this->b = obj.b;
        this->a = obj.a;
    }

private:
    int a;
    int b;
};


int main304() {

    //初始化对象
    Test34 t1(1, 2);

    //拷贝初始化1
    Test34 t2 = t1;

    //拷贝初始化2
    Test34 t3(t2);

}
