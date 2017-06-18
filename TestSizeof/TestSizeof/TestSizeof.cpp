// TestSizeof.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
// 	char* szValue[] = 
// 	{
// 		"1",
// 		"12",
// 		"123",
// 		//"1234"
// 	};

	char szValue[] = 
	{
		"1\
		12\
		123"
		//"1234"
	};

	int nArrSize = sizeof szValue;
	int nElemetSize = sizeof szValue[0];
	int nArrCount = sizeof szValue/sizeof szValue[0];

	printf("%s",szValue);
	return 0;
}

