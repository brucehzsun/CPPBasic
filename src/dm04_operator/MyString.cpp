//
// Created by bruce sun on 2022/12/2.
//

#include "MyString.h"
#include "iostream"

using namespace std;

MyString::MyString() {
    this->len = 0;
    this->p = new char[len + 1];
    strcpy(this->p, "");
}

MyString::MyString(const char *p) {
    if (p == NULL) {
        MyString();
    } else {
        this->len = strlen(p);
        this->p = new char[len + 1];
        strcpy(this->p, p);
    }
}

MyString::MyString(const MyString &s) {
    this->len = s.len;
    this->p = new char[len + 1];
    strcpy(this->p, s.p);
}

MyString::~MyString() {
    if (this->p != NULL) {
        delete[] this->p;
        this->p = NULL;
        this->len = 0;
    }
}

MyString &MyString::operator=(const char *p) {
    if (p == NULL) {
        MyString();
    } else {
        this->len = strlen(p);
        this->p = new char[len + 1];
        strcpy(this->p, p);
    }
    return *this;
}

MyString &MyString::operator=(const MyString &s) {
    if (this->p != NULL) {
        delete[] this->p;
    }
    this->len = s.len;
    this->p = new char[len + 1];
    strcpy(this->p, s.p);
    return *this;
}

char &MyString::operator[](const int index) {
    return this->p[index];
}

std::ostream &operator<<(std::ostream &out, MyString &s){
    out << s.p;
    return out;
}