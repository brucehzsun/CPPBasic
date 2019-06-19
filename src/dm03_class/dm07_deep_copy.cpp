//
// Created by bruce on 2018/10/9.
//
#include <iostream>

using namespace std;


class Teacher {
public:
    Teacher(const char *p) {
        m_len = strlen(p);
        m_p = (char *) malloc(m_len + 1);
        strcpy(m_p, p);
        cout << "len = " << m_len << endl;
    }

    /**
     * 深拷贝
     * @param teacher
     */
    Teacher(const Teacher &teacher) {
        m_len = teacher.m_len;
        m_p = (char *) malloc(m_len + 1);
        strcpy(m_p, teacher.m_p);
        cout << "深拷贝，拷贝构造函数" << endl;
    }

    ~Teacher() {
        cout << "析构函数，name = " << &m_p << endl;
        if (m_p != NULL) {
            free(m_p);
            m_p = NULL;
            m_len = 0;
        }
    }

    char *getName() {
        return m_p;
    }

private:
    char *m_p;
    int m_len;
};


int main() {
    Teacher t1("aaaaaaabbbbbbb");
    cout << "t1.name = " << t1.getName() << endl;

    //拷贝构造函数，浅拷贝，如果没有拷贝构造函数会出错
    Teacher t2 = t1;//拷贝构造函数


    //等号操作符是浅拷贝，会导致内存泄漏；必须重载等号操作符
    Teacher t3("Teacher3");
    t3 = t1;
}
