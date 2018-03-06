#ifndef HANDLER_H
#define HANDLER_H

enum HandlerNum {
    HANDLER_NUM_1,
    HANDLER_NUM_2,
    HANDLER_NUM_3,
    HANDLER_NUM_4
};

class Handler {
public:
    Handler(Handler* handler, HandlerNum num);
    virtual ~Handler();

    virtual void HandleMsg(HandlerNum num);
private:
    Handler* m_nextHandler;
    HandlerNum m_num;
};

#endif