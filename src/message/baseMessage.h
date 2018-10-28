//
// Created by chendaole on 18-10-28.
//

#ifndef UMC_WX_BASEMESSAGE_H
#define UMC_WX_BASEMESSAGE_H

#include <string>

class BaseMessage {
public:
    virtual void SetContent(std::string) = 0;
    virtual std::string GetContent() = 0;
};

#endif //UMC_WX_MSGBASE_H
