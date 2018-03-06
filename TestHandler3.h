#ifndef TESTHANDLER3_H
#define TESTHANDLER3_H

#include "Handler.h"

class TestHandler3: public Handler {
public:
    TestHandler3(Handler* handler, HandlerNum num);
    ~TestHandler3();

    virtual void HandleMsg(HandlerNum num);
};

#endif
