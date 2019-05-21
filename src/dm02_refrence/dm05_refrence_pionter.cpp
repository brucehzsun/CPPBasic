//
// Created by bruce on 2018/9/24.
//
#include <iostream>

using namespace std;

struct Teacher {
    string name;
    int age;
};

/**
 * C语言中的二级指针
 * @param p
 * @return
 */
int getTeacher(Teacher **p) {
    if (p == NULL) {
        return -1;
    }

    Teacher *temp = NULL;
    temp = (Teacher *) malloc(sizeof(Teacher));
    if (temp == NULL) {
        return -2;
    }
    temp->age = 33;
    temp->name = "temp";
    *p = temp;
    return 0;
}

/**
 * C++中使用指针引用
 * @param p
 * @return
 */
int getTeacherRefrence(Teacher *&p) {
    p = (Teacher *) malloc(sizeof(Teacher));
    if (p == NULL) {
        return -1;
    }
    p->age = 36;
    p->name = "reference";
    return 0;
}

int main() {
    Teacher *pT1 = NULL;
    getTeacher(&pT1);
    cout << "Teacher = " << pT1->name << "," << pT1->age << endl;
    free(pT1);

    getTeacherRefrence(pT1);
    cout << "Teacher = " << pT1->name << "," << pT1->age << endl;
    free(pT1);
    return 0;
}