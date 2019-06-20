//
// Created by bruce on 2018/10/12.
//
#include <iostream>

using namespace std;

//C malloc free
//C++ new delete

//基本数据类型
void testBasic() {
    //C语法
    int *p1 = (int *) malloc(sizeof(int));
    *p1 = 10;
    cout << "p1 = " << *p1 << endl;
    free(p1);

    //C++语法
    int *p2 = new int;
    *p2 = 20;
    cout << "p2 = " << *p2 << endl;
    delete p2;

    //直接初始化
    int *p3 = new int(30);
    cout << "p3 = " << *p3 << endl;
    delete p3;
}

//数组
void testArray() {
    //C语法
    int *p1 = (int *) malloc(sizeof(int) * 10);
    p1[0] = 10;
    cout << "p1 = " << p1[0] << endl;
    free(p1);

    //C++语法
    int *pArray = new int[10];
    pArray[0] = 20;
    cout << "pArray = " << pArray[0] << endl;
    //数组释放不要忘记[]
    delete[] pArray;
}

class TestObj {
public:
    TestObj(int a) {
        this->a = a;
        cout << "构造函数调用" << endl;
    }

    ~TestObj() {
        cout << "析构函数调用" << endl;
    }

public:
    void setA(int a) {
        this->a = a;
    }

    int getA() {
        return this->a;
    }

private:
    int a;
};

//类和对象
void testObj() {
    //C语法 不能自动调用构造函数和析构函数
    TestObj *p1 = (TestObj *) malloc(sizeof(TestObj));
    p1->setA(10);
    cout << "p1 = " << p1->getA() << endl;
    free(p1);

    //C++语法
    //new 会调用构造函数； delete会调用析构函数；
    TestObj *p2 = new TestObj(20);
    cout << "p2 = " << p2->getA() << endl;
    delete p2;
}


int main() {
    testBasic();
    testArray();
    testObj();
}
