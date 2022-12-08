//
// Created by bruce on 2019-07-02.
//
#include <iostream>

using namespace std;

class BB {
private:
  int a;
  static int b;

public:
  int getB() { return b; }
  void addB() { this->b = this->b + 1; }
  static int getStaticB(){
    return b;
  }
};

int BB::b = 10;

int main() {
  BB b1, b2;
  b1.addB();
  cout << "b1.b = " << b1.getB() << endl;
  cout << "b2.b = " << b2.getB() << endl;
  cout << "b2.b = " << BB::getStaticB() << endl;
}