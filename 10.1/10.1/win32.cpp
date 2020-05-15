#include "stdafx.h"
#include "win32.h"
int FAC::factorial(int n) {
	int sum = 1;
	while (n) {
		sum *= n;
		n--;
	}
	return sum;
}

float FAC::convert(float deg) {
	return deg*3.14 / 180;
}