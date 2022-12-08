//
// Created by bruce sun on 2022/12/1.
//
#include "iostream"

class Test {
public:
    int operator()(int a, int b) {
        return a + b;
    }
    int add(int a,int b){
        return a+b;
    }
};


int main(){
    Test t;
    int r1 = t(1,2);
    int r2 = t.add(1,2);
    std::cout << "r1="<<r1<<",r2="<<r2<<std::endl;
}