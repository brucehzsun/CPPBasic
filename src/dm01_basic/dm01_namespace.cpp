//
// Created by bruce on 2018/9/22.
//
#include <iostream>

using namespace std;

//定义命名空间
namespace nsA {
    int a = 10;
}

namespace nsB {
    int a = 20;
    namespace nsBA {
        struct Teacher {
        public:
            string name;
            int age;
        };
    }
}

//使用命名空间
int main() {
    using namespace nsA;
    cout << a << endl;
    nsB::nsBA::Teacher teacher;
    teacher.name = "t1";
    teacher.age = 13;
    cout << "教师1:" << teacher.name << endl;

    using namespace nsB::nsBA;
    Teacher teacher1;
    teacher1.age = 12;
    teacher1.name = "t2";
    cout << "教师2:" << teacher1.name << endl;
    return 0;
}