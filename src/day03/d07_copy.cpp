//
// Created by bruce on 2018/10/9.
//
#include <iostream>

using namespace std;


class Teacher307 {
public:
    Teacher307(const char *p) {
        m_len = strlen(p);
        m_p = (char *) malloc(m_len + 1);
        strcpy(m_p, p);
        cout << "len = " << m_len << endl;
    }

    /**
     * 深拷贝
     * @param teacher
     */
    Teacher307(const Teacher307 &teacher) {
        m_len = teacher.m_len;
        m_p = (char *) malloc(m_len + 1);
        strcpy(m_p, teacher.m_p);
        cout << "深拷贝，拷贝构造函数" << endl;
    }

    ~Teacher307() {
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

void mainPlayObject307() {
    Teacher307 t1("aaaaaaabbbbbbb");
    cout << "t1.name = " << t1.getName() << endl;
//    Teacher307 t2 = t1;//拷贝构造函数

    Teacher307 t3("Teacher3");

    //等号操作符是浅拷贝，会导致内存泄漏；
    t3 = t1;
}

int main307() {
    mainPlayObject307();
}
