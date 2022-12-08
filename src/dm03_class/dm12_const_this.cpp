//
// Created by bruce on 2019-07-06.
//
#include <iostream>

using namespace std;

class Test {
private:
  int a;
  int b;

public:
  //此处const修饰的this指针
  void setVar(int a, int b) const {
    //        this->a = a;
    //        this->b = b;
  }

  void setVar2(int a, int b) {
    this->a = a;
    this->b = b;
  }

   int getA() { return this->a; }
};

int main() {
  Test t1{};
  t1.setVar(100, 200);
  t1.setVar2(100, 200);
  cout << "t1.a = " << t1.getA() << endl;
}
