// win.cpp : ���� DLL Ӧ�ó���ĵ���������
//

#include "stdafx.h"
#include "win.h"


// ���ǵ���������һ��ʾ��
WIN_API int nwin=0;

// ���ǵ���������һ��ʾ����
WIN_API int fnwin(void)
{
    return 42;
}

// �����ѵ�����Ĺ��캯����
// �й��ඨ�����Ϣ������� win.h
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