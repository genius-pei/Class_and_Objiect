#define _CRT_SECURE_NO_WARNINGS
#include"Date.h"
int main()
{
	Date d1(2025,4,24);
	Date d2 = d1 + 100;
	d1.Print();
	d2.Print();
	Date d3 = d1 += 100;
	d1 = d3;
	d3.Print();
	d1.Print();
	return 0;

}