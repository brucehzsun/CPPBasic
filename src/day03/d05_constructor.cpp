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

/**
 * 业务函数
 * @param l
 */
void fun(Location l) {
    cout << "fun x = " << l.getX() << ",y = " << l.getY() << endl;
}

void playObj() {
    Location l1(1, 2);

    //拷贝构造函数
    Location l2 = l1;

    //l2实参初始化形参，会调用拷贝构造函数
    fun(l2);
}

int main305() {
    playObj();
}