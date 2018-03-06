#include <stdio.h>
#include "TestHandler3.h"

TestHandler3::TestHandler3(Handler* handler, HandlerNum num): Handler(handler, num)
{
}

TestHandler3::~TestHandler3()
{
}

void TestHandler3::HandleMsg(HandlerNum num)
{
    printf("this is TestHandler3\n");
    Handler::HandleMsg(num);
}
