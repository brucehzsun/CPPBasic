//
// Created by bruce on 2018/9/23.
//
#include <iostream>

using namespace std;

int main() {
    bool b = true;
    b = 10;//bool变量要么是1要么是0，没其他数字
    b = -10;//负值也是true
    cout << "sizeof(bool) = " << sizeof(b) << endl;
    cout << "b = " << b << endl;
    return 0;
}
