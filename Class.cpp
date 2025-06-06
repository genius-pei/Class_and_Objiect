 #define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdio.h>
#include<stdbool.h>
#include"Class.h"
using namespace std;
//
//class Stack
//{
//public:
//	void Init(int n = 4)
//	{
//		int* array = (int*)malloc(sizeof(int) * n);
//		if (array == nullptr)
//		{
//			perror("malloc fail");
//			return;
//		}
//		int capacity = n;
//		int top = 0;
//	}
//
//
//};

//namespace bit
//{
//	// 命名空间中可以定义变量/函数/类型 
//	int rand = 10;
//	int Add(int left, int right)
//	{
//		return left + right;
//	}
//	struct Node
//	{
//		struct Node* next;
//		int val;
//	};
//}
//int main()
//{
//	// 这⾥默认是访问的是全局的rand函数指针 
//	printf("%p\n", rand);
//	// 这⾥指定bit命名空间中的rand 
//	printf("%p\n", bit::rand);
//	return 0;
//}
//
//#include <iostream>
//using namespace std;
//int main()
//{
//	int a = 0;
//	double b = 0.1;
//	char c = 'x';
//	cout << a << " " << b << " " << c << endl;
//	std::cout << a << " " << b << " " << c << std::endl;
//	scanf("%d%lf", &a, &b);
//	printf("%d %lf\n", a, b);
//	// 可以⾃动识别变量的类型 
//	cin >> a;
//	cin >> b >> c;
//	cout << a << endl;
//	cout << b << " " << c << endl;
//	return 0;
//}

//using namespace std;
//void Func(int a = 0)
//{
//	cout << a << endl;
//}
//int main()
//{
//	Func(); // 没有传参时，使⽤参数的默认值 
//	Func(10); // 传参时，使⽤指定的实参 
//	return 0;
//}
//

// 全缺省 
//void Func1(int a = 10, int b = 20, int c = 30)
//{
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//	cout << "c = " << c << endl << endl;
//}
//// 半缺省 
//void Func2(int a, int b = 10, int c = 20)
//{
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//	cout << "c = " << c << endl << endl;
//}
//int main()
//{
//	Func1();
//	Func1(1);
//	Func1(1, 2);
//	Func1(1, 2, 3);
//	Func2(100);
//	Func2(100, 200);
//}

//// 1、参数类型不同 
//int Add(int left, int right)
//{
//	cout << "int Add(int left, int right)" << endl;
//	return left + right;
//}
//double Add(double left, double right)
//{
//	cout << "double Add(double left, double right)" << endl;
//	return left + right;
//}
//// 2、参数个数不同 
//void f()
//{
//	cout << "f()" << endl;
//}
//void f(int a)
//{
//	cout << "f(int a)" << endl;
//}
//// 3、参数类型顺序不同 
//void f(int a, char b)
//{
//	cout << "f(int a,char b)" << endl;
//}
//void f(char b, int a)
//{
//	cout << "f(char b, int a)" << endl;
//}
//
//int main()
//{
//	Add(10, 20);
//	Add(10.1, 20.2);
//	f();
//	f(10);
//	f(10, 'a');
//	f('a', 10);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	// 引⽤：b和c是a的别名 
//	int& b = a;
//	int& c = a;
//	// 也可以给别名b取别名，d相当于还是a的别名 
//	int& d = b;
//	++d;
//	// 这⾥取地址我们看到是⼀样的 
//	cout << &a << endl;
//	cout << &b << endl;
//	cout << &c << endl;
//	cout << &d << endl;
//	return 0;
//}
//int main()
//{
//	 int a = 10;
//	const int& ra = a;
//	
//	const int b = 20;
//      int& rb = b;
//	
//	return 0;
//}

//int main()
//{
//	 int a = 10;
//	const int& ra = a;
//	
//	const int b = 20;
//      int& rb = b;
//	
//	return 0;
//}
//#include<iostream>
//using namespace std;
//void f(int x)
//{
//	cout << "f(int x)" << endl;
//}
//void f(int* ptr)
//{
//	cout << "f(int* ptr)" << endl;
//}
//int main()
//{
//	f(0);
//	// 本想通过f(NULL)调⽤指针版本的f(int*)函数，但是由于NULL被定义成0，调⽤了f(int 
//	//x)，因此与程序的初衷相悖。
//	f(NULL);
//	f((int*)NULL);
//	// 编译报错：error C2665: “f”: 2 个重载中没有⼀个可以转换所有参数类型 
//	// f((void*)NULL);
//
//	f(nullptr);
//	return 0;
//}

//class Date
//{
//public:
//	void Init(int year, int month, int day)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//private:
//	// 为了区分成员变量，⼀般习惯上成员变量 
//	// 会加⼀个特殊标识，如_ 或者 m开头 
//	int _year; // year_ m_year
//	int _month;
//	int _day;
//};
//int main()
//{
//	Date d;
//	d.Init(2024, 3, 31);
//	int x = _year;
//	return 0;
//}
//#include<iostream>
//
//class Date
//{
//public:
//    // 全缺省构造函数
//    Date(int year = 1, int month = 1, int day = 1)
//    {
//        _year = year;
//        _month = month;
//        _day = day;
//    }
//
//    void Print()
//    {
//        std::cout << _year << "/" << _month << "/" << _day << std::endl;
//    }
//
//private:
//    int _year;
//    int _month;
//    int _day;
//};
//
//int main()
//{
//    Date d1; // 调用全缺省构造函数，使用默认值
//    Date d2(2025, 1, 1); // 调用全缺省构造函数，使用传入的参数
//
//    // 注意：如果通过无参构造函数创建对象时，对象后面不用跟括号
//    Date d3;
//
//    d1.Print();
//    d2.Print();
//    d3.Print();
//    return 0;
//}


//class Date
//{
//public:
//
//
//    void Print()
//    {
//        std::cout << _year << "/" << _month << "/" << _day << std::endl;
//    }
//
//private:
//    int _year;
//    int _month;
//    int _day;
//};
//
//int main()
//{
//    Date d1; // 调用全缺省构造函数，使用默认值
//
//    d1.Print();
//
//    return 0;
//}
//typedef int STDataType;
//class Stack
//{
//public:
//	Stack(int n = 4)
//	{
//		_a = (STDataType*)malloc(sizeof(STDataType) * n);
//		if (nullptr == _a)
//		{
//			perror("malloc申请空间失败");
//			return;
//		}
//		_capacity = n;
//		_top = 0;
//	}
//	~Stack()
//	{
//		cout << "~Stack()" << endl;
//		free(_a);
//		_a = nullptr;
//		_top = _capacity = 0;
//	}
//private:
//	STDataType* _a;
//	size_t _capacity;
//	size_t _top;
//};
//int main()
//{
//Stack st;
//}
//

//class Date
//{
//public:
//	Date(int year = 1, int month = 1,int day=1)
//	{
//		cout << "Date(int year = 1, int month = 1,int day=1)" << endl;
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//	Date(Date& d)
//	{
//		_year = d._year;
//		_month = d._month;
//		_day = d._day;
//		cout << _year << "/" << _month << "/" << _day << std::endl;
//	}
//	
//	~Date()
//	{
//		cout << "~Date()" << endl;
//	}
//	void Dateprint()
//	{
//		cout << _year << "/" << _month << "/" << _day << std::endl;
//	}
// /*private:*/
//	int _year;
//	int _month;
//	int _day;
//
//};
//void func(Date d)
//{
//
//}bool operator==(const Date& d1, const Date& d2)
//{
//	return d1._year == d2._year
//		&& d1._month == d2._month
//		&& d1._day == d2._day;
//}
//	 int main()
//{
//	//Date d1(2025,4,11);
//	///*func(d1);*/
//	//Date d2(d1);
//	////d1.Dateprint();
//	////d2.Dateprint();
//	Date d1(2024, 7, 5);
//	Date d2(2024, 7, 6);
//
//
//	
//	// 编译器会转换成 operator==(d1, d2); 
//	d1 == d2;
//	return 0;
//
//}
void Date::Print()