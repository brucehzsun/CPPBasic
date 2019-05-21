//
// Created by bruce on 2018/10/8.
//
#include <iostream>

using namespace std;

class Location {
public:
    Location(int x = 0, int y = 0) {
        this->x = x;
        this->y = y;
        cout << "普通构造函数执行" << endl;
    }

    Location(const Location &l) {
        this->x = l.x;
        this->y = l.y;
        cout << "拷贝构造函数执行" << endl;
    }

    ~Location() {
        cout << "析构函数执行" << endl;
    }

public:
    int getX() {
        return this->x;
    }

    int getY() {
        return this->y;
    }

private:
    int x, y;
};

Location fun306() {
    Location a(1, 2);
    return a;
}

void playObj306() {
    //不是拷贝
    Location b;
    b = fun306();

    //也没有调用拷贝构造函数
    Location c = fun306();

    //也没有调用拷贝构造函数
    fun306();
}

int main306() {
    playObj306();
}
