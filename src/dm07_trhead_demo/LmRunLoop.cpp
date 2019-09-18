//
// Created by bruce on 2019-09-18.
//

#include "LmRunLoop.h"

LmRunLoop::LmRunLoop() : RunLoop("LmRunLoop") {
    cout << "LmRunLoop constructor start" << endl;
}

LmRunLoop::~LmRunLoop(){
    cout << "~LmRunLoop constructor start" << endl;
}

void LmRunLoop::DoMainLoop() {
    cout << "LmRunLoop DoMainLoop start" << endl;
}
