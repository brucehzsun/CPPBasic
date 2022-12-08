//
// Created by bruce sun on 2022/11/28.
//
#include "iostream"
class A {
  //设置B是A的友元类
  friend class B;
public:
  A(int x = 1) { this->x = x; }

public:
  int display() { return this->x;}

private:
  int x;
};

class B {
public:
  B(A &a){
    this->a_ = &a;
  }
  void setX(int x) { a_->x = x; }

private:
  A *a_;
};

int main() {
  A a(10);
  std::cout << "A::x = " << a.display() << std::endl;
  B b(a);
  b.setX(20);
  std::cout << "A::x = " << a.display() << std::endl;
}