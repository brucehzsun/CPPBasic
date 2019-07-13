//
// Created by bruce on 2019-07-13.
//
#include <iostream>

using namespace std;

class Person {
public:
    Person(char *pName) {
        this->pName = pName;
        cout << "Person 构造函数，name = " << pName << endl;
    }

    ~Person() {
        cout << "~Person 析构函数 name  = " << pName << endl;
    }

private:
    char *pName;
};

class Parent : public Person {
public:

    Parent(char *pName) : Person(pName) {
        this->pParentName = pName;
        cout << "父类构造函数:" << this->pParentName << endl;
    }

    ~Parent() {
        cout << "~父类析构函数" << endl;
    }

    void printP() {
        cout << "parentName:" << this->pParentName << endl;
    }

private:
    char *pParentName;
};

class Child : public Parent {

public:
    Child(char *pName) : Parent(pName), p1(pName), p2(pName) {
        this->pName = pName;
        cout << "子类构造函数:" << pName << endl;
    }

    ~Child() {
        cout << "~子类析构函数" << endl;
    }

    void printC() {
        cout << "pName:" << pName << endl;
    }

private:
    char *pName;
    Person p1;
    Person p2;
};

void printObj(Parent *p) {
    p->printP();
}

void printObj2(Parent &p) {
    p.printP();
}

int main() {
    Child c1("childName");
    c1.printP();
    c1.printC();
}
