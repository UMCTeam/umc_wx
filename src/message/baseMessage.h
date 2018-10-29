//
// Created by chendaole on 18-10-28.
//

#ifndef UMC_WX_BASEMESSAGE_H
#define UMC_WX_BASEMESSAGE_H

#include <string>
#include <map>

class BaseMessage {
public:
    typedef std::map<std::string, std::string> HEADER_MAP_TYPE;
    typedef struct
    {
        std::string url;
        HEADER_MAP_TYPE headers;
    } HTTP_MESSAGE_TYPE;

public:
    virtual void SetContent(std::string) = 0;
    virtual std::string GetContent() = 0;
    virtual HTTP_MESSAGE_TYPE GetMessage() = 0;
};

#endif //UMC_WX_MSGBASE_H
