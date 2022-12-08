//
// Created by bruce sun on 2022/12/7.
//
#include "iostream"
#include "queue"

int main(){
    std::queue<int> queue;

    queue.push(1);
    queue.push(2);
    queue.push(3);
    queue.push(4);

    int value = queue.front();
    queue.pop();
    std::cout << value << std::endl;
    queue.push(5);

    while (!queue.empty()){
        int value = queue.front();
        queue.pop();
        std::cout << value << std::endl;
    }
}