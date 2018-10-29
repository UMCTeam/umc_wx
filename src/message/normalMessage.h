//
// Created by chendaole on 18-10-28.
//

#ifndef UMC_WX_NORMALMESSAGE_H
#define UMC_WX_NORMALMESSAGE_H

#include "baseMessage.h"

class NormalMessage : public BaseMessage{
public:
    typedef struct
    {
        std::string content;
    } NORMAL_MESSAGE;

public:
    void SetContent(std::string) final;

    std::string GetContent() final;
    HTTP_MESSAGE_TYPE GetMessage() final;

private:

    NORMAL_MESSAGE m_msg;
};


#endif //UMC_WX_NORMALMESSAGE_H
