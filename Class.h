#pragma once
#include<iostream>
#include<assert.h>
using namespace std;
class Date
{
public:
	Date(int year = 1, int month = 1, int day = 1);
	Date operator+(int day);
private:
		int _year;
		int _month;
		int _day;
};