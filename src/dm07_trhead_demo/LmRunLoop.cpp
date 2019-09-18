//
// Created by bruce on 2019-09-18.
//

#include "LmRunLoop.h"

LmRunLoop::LmRunLoop() : RunLoop("LmRunLoop") {
    cout << "LmRunLoop constructor start" << endl;
}

LmRunLoop::~LmRunLoop() {
    cout << "~LmRunLoop constructor start" << endl;
}

void LmRunLoop::DoMainLoop() {
    cout << "LmRunLoop DoMainLoop start" << endl;
}

void LmRunLoop::RegistCallback(void *dec, CommandCallback func) {
    cout << "LmRunLoop RegistCallback start 1111" << endl;
    this->dec_ = dec;
    cout << "LmRunLoop RegistCallback start 222 " << endl;
    this->func_ = func;
    cout << "LmRunLoop RegistCallback finish" << endl;
}
