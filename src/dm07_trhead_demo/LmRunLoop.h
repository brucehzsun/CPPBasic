//
// Created by bruce on 2019-09-18.
//
#include <iostream>
#include "thread/RunLoop.h"
#include <map>

#ifndef DECODER_LMRUNLOOP_H
#define DECODER_LMRUNLOOP_H

using namespace std;

typedef void (*CommandCallback)(void *dec, int command);

class LmRunLoop : public RunLoop {
public:
    LmRunLoop();

    ~LmRunLoop();

    //多线程
    virtual void DoMainLoop();

    void RegistCallback(void *dec, CommandCallback func);

private:
    void *dec_;
    CommandCallback func_;

//    std::map<int, std::shared_ptr<xFSTContainer>> lmMap;
    map<int, string> lmMap;
    condition_variable cv;

};


#endif //DECODER_LMRUNLOOP_H
