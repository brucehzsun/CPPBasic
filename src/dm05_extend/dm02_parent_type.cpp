//
// Created by bruce on 2019-07-13.
//
#include <iostream>

using namespace std;

class Parent {
public:

    Parent(int a, int b) {
        this->a = a;
        this->b = b;
        cout << "父类构造函数" << endl;
    }

    Parent(const Parent &other) {
        this->a = other.a;
        this->b = other.b;
    }

    ~Parent() {
        cout << "~父类析构函数" << endl;
    }

    void printP() {
        cout << "a = " << a << ",b = " << b << endl;
    }

private:
    int a;
    int b;
};

class Child : public Parent {

public:
    Child(int a, int b, int c) : Parent(a, b) {
        this->c = c;
        cout << "子类构造函数" << endl;
    }

    ~Child() {
        cout << "~子类析构函数" << endl;
    }

    void printC() {
        cout << "c = " << c << endl;
    }

private:
    int c;
};

void printObj(Parent *p) {
    p->printP();
}

void printObj2(Parent &p) {
    p.printP();
}

void test1() {
//    Parent p1;
//    p1.printP();
//
//    Child c1;
//    c1.printP();
//    c1.printC();
//
//    //1.父类指针可以指向子类对象
//    Parent *p2 = NULL;
//    p2 = &c1;
//    p2->printP();
//
//    //2.子类可以作为父类的函数参数传递
//    printObj(&p1);
//    printObj(&c1);
//
//    //3.引用做函数参数
//    printObj2(p1);
//    printObj2(c1);
//
//    Parent p3 = c1;
}

int main() {
    Child c1(1, 2, 3);
    c1.printP();
    c1.printC();
}
