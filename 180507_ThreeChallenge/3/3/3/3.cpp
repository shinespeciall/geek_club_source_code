// 3.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>  
#include<regex>
#include<windows.h>
#include<stdlib.h>

int main()
{
	DWORD start_time = GetTickCount();//获取系统时间，单位毫秒
	std::regex r("(a+a+)+s");
	std::string s="aaaaaaaaaaaaaa";
	if (std::regex_match(s, r))//匹配正则表达式
		std::cout << "get it!" << std::endl;
	DWORD end_time = GetTickCount();
	std::cout << "The run time is:" << (end_time - start_time) << "ms!" << std::endl;
	system("pause");
	return 0;
}

