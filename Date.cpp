#define _CRT_SECURE_NO_WARNINGS
#include"Date.h"
void Date::Print()const
{
	cout << _year << "/" << _month << "/" << _day << endl;
}
bool Date::CheckDate()
{
	if (_month < 1 || _month>12 || _day<1 || _day>GetMonthDay(_year, _month))
	{
		return false;
	}
	else
	{
		return true;
	}
}
Date::Date(int year, int month, int day)//构造函数
{
	_year = year;
	_month = month; 
	_day = day;
	if (!CheckDate())
	{
		cout << "非法日期" << endl;
	}
}
Date& Date::operator+=(int day)//改变传入的
{
	if (day < 0)
	{
		return *this -= -day;
	}
	_day += day;
	while (_day > GetMonthDay(_year, _month))//进位
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
Date Date::operator+(int day)//不改变传入
{
	Date tmp(*this);
	tmp._day += day;
	
	while (tmp._day > GetMonthDay(tmp._year,tmp._month))//进位
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
Date& Date::operator-=(int day)
{
	_day -= day;
	while (_day <= 0)
	{
		--_month;
		if (_month == 0)
		{
			_month = 12;
			_year--;
		}
		_day += GetMonthDay(_year, _month);
	}
	return *this;
}
Date Date::operator-(int day)
{
	Date tmp(*this);
	tmp -= day;
	return tmp;
}
Date& Date::operator++()
{
	*this += 1;
	return *this;
}
Date Date::operator++(int)
{
	Date tmp(*this);
	*this += 1;
	return tmp;
}

Date& Date::operator--()
{
	*this -= 1;
	return *this;
}
Date Date::operator--(int)
{
	Date tmp(*this);
	*this -= 1;
	return tmp;
}
bool Date:: operator==(const Date& d)
{
	return _year == d._year
		&& _month == d._month
		&& _day == d._day;
}
bool Date::operator!=(const Date& d)
{
	return !(*this==d);
}
bool Date:: operator<(const Date& d)
{
	if (_year < d._year)
	{
		return true;
	}
	else if (_year == d._year && _month < d._month)
	{
		return true;
	}
	else if (_month == d._month && _day < d._day)
	{
		return true;
	}
	return false;
}
bool Date::operator<=(const Date& d)
{
	return *this < d || *this == d;
}
bool Date:: operator>(const Date& d)
{
	return !(*this <= d);
}
bool Date::operator>=(const Date& d)
{
	return !(*this < d);
}
// 
Date& Date::operator=(const Date& d)
{
	if (this != &d)
	{
		_year = d._year;
		_month = d._month;
		_day = d._day;
	}
	return *this;
}
ostream& operator<<(ostream& out, const Date& d)  
{
	out << d._year << "年" << d._month << "月" << d._day << "日"<<"\n"<<endl;
	return out;
}
istream& operator>>(istream& in, Date& d)
{
	while (1)
	{
		cout << "请依次输入年月日:>";
		in >> d._year >> d._month >> d._day;
		if (d.CheckDate())
		{
			break;
		}
		if (!d.CheckDate())
		{
			cout << "日期非法,请重新输入" << endl;
		}
	}
	return in;
}
