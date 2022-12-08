//
// Created by bruce on 2018/9/25.
//
#include <iostream>

using namespace std;

class MyCircle {
public:
    double m_r;//属性，成员变量
    double m_s;
public:
    double getR() {
        return this->m_r;
    }

    void setR(double r) {
        this->m_r = r;
    }

    double getS() {
        this->m_s = 3.1415926 * this->m_r * 2;
        return this->m_s;
    }

};

int main() {
    MyCircle c1, c2;
    c1.setR(12);
    cout << "c1 s = " << c1.getS() << endl;
}