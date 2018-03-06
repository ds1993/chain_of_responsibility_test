#include <stdio.h>
#include "Handler.h"

Handler::Handler(Handler* handler, HandlerNum num): m_num(num)
{
    m_nextHandler = handler;
}

Handler::~Handler()
{
}

void Handler::HandleMsg(HandlerNum num)
{
    if (num == m_num) {
        printf("num = %d\n", m_num);
    }
    else if (m_nextHandler != NULL) {
        m_nextHandler->HandleMsg(num);
    }
    else {
        printf("do not find handler for num %d\n", num);
    }
}