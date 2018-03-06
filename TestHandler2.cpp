#include <stdio.h>
#include "TestHandler2.h"

TestHandler2::TestHandler2(Handler* handler, HandlerNum num): Handler(handler, num)
{
}

TestHandler2::~TestHandler2()
{
}

void TestHandler2::HandleMsg(HandlerNum num)
{
    printf("this is TestHandler2\n");
    Handler::HandleMsg(num);
}
