//
// Created by bruce sun on 2022/12/2.
//

#ifndef CPPBASIC_MYSTRING_H
#define CPPBASIC_MYSTRING_H

#include "iostream"

class MyString {
public:
    MyString();

    MyString(const char *p);

    MyString(const MyString &s);

    ~MyString();

public:
    MyString &operator=(const char *p);

    MyString &operator=(const MyString &s);

    char &operator[](const int index);

    friend std::ostream &operator<<(std::ostream &out, MyString &s);

public:
    int len;
    char *p;
};


#endif //CPPBASIC_MYSTRING_H
