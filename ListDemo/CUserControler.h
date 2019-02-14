#pragma once
#include "CUserInfo.h"
#include "Utils.h"
#include "../libcURL/include/curl.h"
#include <string>
/***
*和模型对应的控制器类，包含了操作模型的相关方法，序列化和反序列化方法
模型提供基础的数据存储，数据类型转换，相关的数据操作应当放到控制器类中
控制器类是提供给UI操作模型的利器。

add by ljm
*/
class CUserControler
{
public:
	CUserControler();
	virtual ~CUserControler();

public:
	void ParseFromJson(string& url, CUserInfo* info);
	void SaveUserInfoToFile(CUserInfo* info, const string& filepath);
	void GetUserInfoFromFile(CUserInfo* info, const string& filepath);
	void SetK_V(CUserInfo* info, const string& msg);

public:
	Utils m_utils;
};

