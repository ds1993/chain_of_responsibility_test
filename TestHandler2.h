#ifndef TESTHANDLER2_H
#define TESTHANDLER2_H

#include "Handler.h"

class TestHandler2: public Handler {
public:
    TestHandler2(Handler* handler, HandlerNum num);
    ~TestHandler2();

    virtual void HandleMsg(HandlerNum num);
};

#endif
