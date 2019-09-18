//
// Created by bruce on 2019-09-18.
//
#include "LmRunLoop.h"

void MyCommandCallback(void *dec, int command) {
    cout << "MyCommandCallback start" << endl;
}
//typedef void (*CommandCallback)(void *dec, int command);

int main() {
    LmRunLoop *lmRunLoop;
    lmRunLoop->RegistCallback(lmRunLoop, MyCommandCallback);
    lmRunLoop->StartMainLoop();
}

