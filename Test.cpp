#define _CRT_SECURE_NO_WARNINGS
#include"Date.h"
void test01()
{
	Date d1(2025, 4, 24);
	Date d2 = d1 += 100;
	d1.Print();
	d2.Print();
	//Date d3 = d1 += 100;
	//d1 = d3;
	//d3.Print();
	//d1.Print();
}
void test02()
{
	Date d1(2025, 4, 24);
	Date d2 = d1 - 1000;
	d1.Print();
	d2.Print();
}
void test03()
{
	Date d1(2025, 4, 24);
	Date d2 =++d1;
	d1.Print();
	d2.Print();

}
void test04()
{
	Date d1(2025, 4, 24);
	Date d2(2025, 4, 21);
	cout << (d1 < d2) << endl;
	cout << (d1 > d2) << endl;
}

int main()
{
	//test01();
	//test02();
	//test03();
	test04();
	return 0;
}