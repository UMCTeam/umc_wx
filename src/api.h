//
// Created by chendaole on 18-10-28.
//

#ifndef UMC_WX_API_H
#define UMC_WX_API_H

#include <string>
#include <string.h>
#include <time.h>
#include <stdio.h>

std::string getQRLoginUuid()
{
    char url[1024];
    char str_timestamp[20];
    strcpy(url, "https://login.wx.qq.com/jslogin?appid=wx782c26e4c19acffb&redirect_uri=https%3A%2F%2Fwx.qq.com%2Fcgi-bin%2Fmmwebwx-bin%2Fwebwxnewloginpage&fun=new&lang=zh_CN&_=1540716464534/jslogin?appid=wx782c26e4c19acffb&redirect_uri=https%3A%2F%2Fwx.qq.com%2Fcgi-bin%2Fmmwebwx-bin%2Fwebwxnewloginpage&fun=new&lang=zh_CN&_=1540716464534/jslogin ?appid=wx782c26e4c19acffb&redirect_uri=https%3A%2F%2Fwx.qq.com%2Fcgi-bin%2Fmmwebwx-bin%2Fwebwxnewloginpage&fun=new&lang=zh_CN&_=");

    time_t timestamp;
    time(&timestamp);
    sprintf(str_timestamp, "%ld", timestamp);

    strcat(url, str_timestamp);

    return std::string(url);
}

#endif //UMC_WX_API_H
