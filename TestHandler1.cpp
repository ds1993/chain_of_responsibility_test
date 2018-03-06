#include <stdio.h>
#include "TestHandler1.h"

TestHandler1::TestHandler1(Handler* handler, HandlerNum num): Handler(handler, num)
{
}

TestHandler1::~TestHandler1()
{
}

void TestHandler1::HandleMsg(HandlerNum num)
{
    printf("this is TestHandler1\n");
    Handler::HandleMsg(num);
}
