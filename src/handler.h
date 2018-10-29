//
// Created by chendaole on 18-10-28.
//

#ifndef UMC_WX_HANDLER_H
#define UMC_WX_HANDLER_H

#include <iostream>
#include <sstream>
#include <curl/curl.h>
#include "api.h"
#include "message/baseMessage.h"


size_t write_data(void *ptr, size_t size, size_t nmemb, void *stream)
{
    std::string data((const char*) ptr, (size_t) size * nmemb);

    *((std::stringstream*) stream) << data << std::endl;

    return size * nmemb;
}


template <class T>
class Handler {

public:

    //登录处理
    bool Login()
    {
        BaseMessage::HTTP_MESSAGE_TYPE msg;
        msg.url = getQRLoginUuid();

        std::cout << Get(msg) << std::endl;
    }

    //发送消息
    void SendMessage(T& msg)
    {
        BaseMessage* ptr = (BaseMessage*)(&msg);
        std::cout << ptr->GetContent() << std::endl;
    }

private:
    std::string Get(const BaseMessage::HTTP_MESSAGE_TYPE& message)
    {
        CURL* easy_handle = curl_easy_init();

        if(easy_handle == NULL)
        {
            printf("create easy_handle error");
            curl_global_cleanup();
        }

        std::stringstream out;

        //设置请求头部
        curl_easy_setopt(easy_handle, CURLOPT_URL, getQRLoginUuid().c_str());
        curl_easy_setopt(easy_handle, CURLOPT_WRITEFUNCTION, write_data);
        curl_easy_setopt(easy_handle, CURLOPT_WRITEDATA, &out);

        CURLcode res = curl_easy_perform(easy_handle);
        if (res != CURLE_OK) {
            fprintf(stderr, "curl_easy_perform() failed: %s\n", curl_easy_strerror(res));
        }

        //输出结果
        std::string str_json = out.str();

        curl_easy_cleanup(easy_handle);
        curl_global_cleanup();

        return  str_json;
    }
};


#endif //UMC_WX_HANDLER_H
