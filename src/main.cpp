#include <iostream>

#include "handler.h"
#include "message/normalMessage.h"

int main() {
    NormalMessage msg;
    msg.SetContent("message");
    Handler<BaseMessage> handler;

    handler.Login();
    handler.SendMessage(msg);

    return 0;
}