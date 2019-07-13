//
// Created by bruce on 2019-07-10.
//
#include <iostream>

using namespace std;

class Name {
public:
    Name(const char *pName) {
        this->len = strlen(pName);
        this->pName = (char *) malloc(sizeof(char) * (this->len + 1));
        strcpy(this->pName, pName);
    }

    ~Name() {
        if (this->pName != nullptr) {
            free(this->pName);
            this->pName = nullptr;
        }
        this->len = 0;
    }

private:
    char *pName;
    int len;

public:
    char *getName() {
        return this->pName;
    }

    int getLen() {
        return this->len;
    }

    Name &operator=(Name &other) {
        //1.释放this的内存，避免内存泄漏
        free(this->pName);

        //2.create new char
        this->len = other.len;
        this->pName = new char[this->len + 1];

        //3.copy
        strcpy(this->pName, other.pName);
        return *this;
    }
};

int main() {
    Name n1("aaaaaaaaa");
    Name n2("bbbbb");
    cout << "n1.name = " << n1.getName() << ", n1.len = " << n1.getLen() << endl;
    cout << "n2.name = " << n2.getName() << ", n2.len = " << n2.getLen() << endl;

    cout << "执行拷贝" << endl;
    n1 = n2;
    cout << "n1.name = " << n1.getName() << ", n1.len = " << n1.getLen() << endl;
    cout << "n2.name = " << n2.getName() << ", n2.len = " << n2.getLen() << endl;
}
