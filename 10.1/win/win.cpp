// win.cpp : 定义 DLL 应用程序的导出函数。
//

#include "stdafx.h"
#include "win.h"


// 这是导出变量的一个示例
WIN_API int nwin=0;

// 这是导出函数的一个示例。
WIN_API int fnwin(void)
{
    return 42;
}

// 这是已导出类的构造函数。
// 有关类定义的信息，请参阅 win.h
Cwin::Cwin()
{
    return;
}


WIN_API int factorial(int n) {
	int sum = 1;
	while (n) {
		sum *= n;
		n--;
	}
	return sum;
}

WIN_API float convert(float deg) {
	return deg*3.14 / 180;
}