//
// Created by bruce on 2019-09-09.
//

#include <iostream>           // std::cout
#include <thread>             // std::thread
#include <chrono>             // std::chrono::seconds
#include <mutex>              // std::mutex, std::unique_lock
#include <condition_variable> // std::condition_variable, std::cv_status
#include <map>

using namespace std;

std::condition_variable cv;

map<int, string> ID_Name;

void do_read_value(int a) {
    string value;
    std::cin >> value;
    ID_Name.insert(pair<int, string>(1,value));
    cv.notify_one();
    std::cout << "sub thread end of file" << std::endl;
}

int main() {
    std::cout << "Please, enter an integer (I'll be printing dots): \n";
    std::thread th(do_read_value,10);

    std::mutex mtx;
    std::unique_lock<std::mutex> lck(mtx);
    while (true) {
        std::cv_status status = cv.wait_for(lck, std::chrono::milliseconds(1000));
        if (status == std::cv_status::timeout) {
            std::cout << '.';
            std::cout.flush();
        } else if (status == std::cv_status::no_timeout) {
            std::cout << " status = no_timeout" << std::endl;
            break;
        }
    }




    map<int,string>::iterator iter;
    iter = ID_Name.find(1);
    if (iter != ID_Name.end()){
        std::cout << "You entered: " << ID_Name.at(1) << std::endl;
        cout << "Find, the value is "<<iter->second<<endl;
    }

    th.join();
    std::cout << "thread joined " << std::endl;

    return 0;
}