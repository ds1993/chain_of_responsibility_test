#include "TestHandler1.h"
#include "TestHandler2.h"
#include "TestHandler3.h"

int main()
{
    TestHandler3* handler3 = new TestHandler3(0, HANDLER_NUM_3);
    TestHandler2* handler2 = new TestHandler2(handler3, HANDLER_NUM_2);
    TestHandler1* handler1 = new TestHandler1(handler2, HANDLER_NUM_1);
    handler1->HandleMsg(HANDLER_NUM_1);
    handler1->HandleMsg(HANDLER_NUM_2);
    handler1->HandleMsg(HANDLER_NUM_3);
    handler1->HandleMsg(HANDLER_NUM_4);
    delete handler1;
    delete handler2;
    delete handler3;
}
