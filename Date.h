#pragma once
#pragma once
#include<iostream>
#include<assert.h>
using namespace std;
class Date
{
public:
	int GetMonthDay(int year, int month)//返回月份的天数
	{
		assert(month > 0 && month < 13);
		static int monthdayarr[13] = { -1,31,28,31,30,31,30,31,30,31,31,30,31 };
		if (month == 2 && ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)))//为闰年的情况
		{
			return 29;
		}
		else
			return monthdayarr[month];

	}
	void  Print();

	Date(int year = 1, int month = 1, int day = 1);//构造函数
	Date(const Date& d)
	{
		_year = d._year;
		_month = d._month;
		_day = d._day;
	}
	Date& operator+=(int day);
	Date operator+(int day);
	Date& operator-=(int day);
	Date operator-(int day);
	Date& operator++();//前置++
	Date operator++(int);//后置++
	Date& operator--();//前置——
	Date operator--(int);//后置——
	bool  operator==(const Date& d);
	bool  operator!=(const Date& d);	
	bool  operator<(const Date& d);
	bool operator<=(const Date& d);
	bool  operator>(const Date& d);
	bool  operator>=(const Date& d);



	Date& operator=(const Date& d)
	{
		if (this != &d)
		{
			_year = d._year;
			_month = d._month;
			_day = d._day;
		}
		return *this;
	}


private:
	int _year;
	int _month;
	int _day;
};