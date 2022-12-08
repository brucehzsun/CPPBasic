//
// Created by bruce on 2019-07-03.
//
#include <iostream>

using namespace std;

class A {
private:
    int a;//4
    int b;//4
    static int c;//0
public:
    int getA() {//0
        return this->a;
    }
    int getB() {//0
      return this->b;
    }
};

int main() {

    int size = sizeof(A);
    cout << "size = " << size << endl;
}
