//
// Created by chendaole on 18-10-28.
//

#include "normalMessage.h"

void NormalMessage::SetContent(std::string content)
{
    m_msg.content = content;
}

std::string NormalMessage::GetContent()
{
    return  m_msg.content;
}

NormalMessage::HTTP_MESSAGE_TYPE NormalMessage::GetMessage()
{

    HTTP_MESSAGE_TYPE msg;

    //设置消息请求的数据结构
    msg.url = "普通消息地址";

    return msg;
}