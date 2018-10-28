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