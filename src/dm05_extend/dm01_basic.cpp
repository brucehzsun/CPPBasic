//
// Created by bruce on 2019-07-13.
//
#include <iostream>

using namespace std;

class Parent {

public:
    void printNum() {
        cout << "a = " << this->a << endl;
        cout << "b = " << this->b << endl;
    }

    int d;
protected:
    int c;
private:
    int a = 1;
    int b = 2;
};

//class Child : private Parent {
//class Child : protected Parent {
class Child : public Parent {
public:
    void test() {
        this->c = 5;
        this->d = 6;
    }
private:
    int d;
};

int main() {
    Child c1;
    c1.printNum();
}