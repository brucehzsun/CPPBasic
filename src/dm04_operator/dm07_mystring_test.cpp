//
// Created by bruce sun on 2022/12/2.
//
#include "MyString.h"
#include "iostream"

int main() {
//    MyString s1;
    char *p = "test";
    MyString s2(p);

    MyString s3 = s2;

    MyString s4;
    s4 = "test";

    MyString s5;
    s5 = s4;
    std::cout << "s4=" << s4.p << ",s5=" << s5.p << std::endl;

    s5[1] = 't';
    std::cout << "s4[1]=" << s4[1] << std::endl;
    std::cout << "s4=" << s4.p << ",s5=" << s5.p << std::endl;


    std::cout << "s4=" << s4 << ",s5=" << s5 << std::endl;
}