//
// Created by bruce sun on 2022/12/5.
//
#include "iostream"
class Parent {
public:
    int a;
};

class B1 : virtual public Parent {
public:
    int b1;
};

class B2 : virtual public Parent {
public:
    int b2;
};

class C : public B1, public B2 {
public:
    int c;
};

int main(){
    C c;
    c.a = 10;
    std::cout << c.a << std::endl;
};