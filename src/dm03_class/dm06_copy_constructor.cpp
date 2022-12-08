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
    std::cout << "普通构造函数执行 x=" << x << ",y=" << y << ",this=" << this
              << endl;
  }

  Location(const Location &l) {
    this->x = l.x;
    this->y = l.y;
    cout << "拷贝构造函数执行" << endl;
  }

  ~Location() {
    // cout << "析构函数执行" << endl;
    std::cout << "~析构函数执行 x=" << x << ",y=" << y << ",this:" << this
              << endl;
  }

public:
  int getX() { return this->x; }

  int getY() { return this->y; }

private:
  int x, y;
};

Location getLocation() {
  Location a(3, 4);
  return a;
}

int main() {
  //不是拷贝,是赋值操作；没有调用拷贝构造函数，应该调用了某个其他默认函数；
  //    Location b(1,2);
  //    b = getLocation();
  //    std::cout << "x="<<b.getX()<<",y="<<b.getY()<<endl;
//  cout << "========" << endl;

  //也没有调用拷贝构造函数
  Location c = getLocation();
  cout << "========" << endl;

  //也没有调用拷贝构造函数
  //    getLocation();
  //    cout << "========"<< endl;
}
