#ifndef TESTHANDLER1_H
#define TESTHANDLER1_H

#include "Handler.h"

class TestHandler1: public Handler {
public:
    TestHandler1(Handler* handler, HandlerNum num);
    ~TestHandler1();

    virtual void HandleMsg(HandlerNum num);
};

#endif
