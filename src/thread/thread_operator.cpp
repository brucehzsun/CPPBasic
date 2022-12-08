//
// Created by bruce sun on 2022/11/23.
//

#include <iostream>
#include <thread>

class ThreadOperator{
public:
    void operator()(){
        std::cout << "operator(),id="<< std::this_thread::get_id() << std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(2000));
        std::cout << "operator() finish,id="<< std::this_thread::get_id() << std::endl;
    }

    void operator()(int x,int y){
        std::cout << "operator(x,y) = "<< x+y<<",id="<< std::this_thread::get_id() << std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(4000));
        std::cout << "operator(x,y) finish = "<< x+y<<",id="<< std::this_thread::get_id() << std::endl;
    }
};

int main(){
    std::cout << "main = "<< std::this_thread::get_id() << std::endl;
    ThreadOperator o1;
    std::thread t1(o1);



    ThreadOperator o2;
    std::thread t2(o2,2,3);
//    t2.detach();


    t1.join();
    t2.join();
}