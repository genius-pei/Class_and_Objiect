#define _CRT_SECURE_NO_WARNINGS
#include"Date.h"
void Date::Print()
{
	cout << _year << "/" << _month << "/" << _day << endl;
}
Date::Date(int year, int month, int day)//���캯��
{
	_year = year;
	_month = month;
	_day = day;
}
Date& Date::operator+=(int day)//�ı䴫���
{
	_day += day;
	while (_day > GetMonthDay(_year, _month))//��λ
	{
		_day -= GetMonthDay(_year, _month);
		++_month;
		if (_month == 13)
		{
			_month = 1;
			_year++;
		}
	}
	return *this;
}
Date Date::operator+(int day)//���ı䴫��
{
	Date tmp(*this);
	tmp._day += day;
	
	while (tmp._day > GetMonthDay(tmp._year,tmp._month))//��λ
	{
		tmp._day -= GetMonthDay(tmp._year, tmp._month);
		++tmp._month;
		if (tmp._month == 13)
		{
			tmp._month = 1;
			tmp._year++;
		}
	}
	return tmp;
}