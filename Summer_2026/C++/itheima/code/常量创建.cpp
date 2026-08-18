#include <iostream>
using namespace std;

#define Day 7//语法：#define 常量名 常量值

int main()
{
	cout << "一周里总共有：" << Day << "天" << endl;
	//Day = 8;//报错，宏常量不可以修改

	const int month = 12;
	//month = 24;//错误，const修饰的变量也称为常量
	cout << "一年总共有：" << month << "个月份" << endl;

	system("pause");

	return 0;
}