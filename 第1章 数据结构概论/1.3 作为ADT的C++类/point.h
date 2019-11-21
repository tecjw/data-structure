#ifndef POINT_H
#define POINT_H						//In the header file point.h
#include <iostream>
using namespace std;
class Point								//类定义
{
public:										//公有域
	Point(int, int);						//构造函数
	Point(Point&);						//复制构造函数
	~Point();								//析构函数
	int get_x();							//存取函数
	int get_y();
	void put_x(int a);
	void put_y(int b);
	Point operator+(Point& p);	//重载函数：当前对象+参数表中对象p
	Point operator*(int i);			//重载函数：当前对象*参数表中对象p
	int operator>(Point p);			//重载函数：判断当前对象>参数表中对象p否
	int operator<(Point p);			//重载函数：判断当前对象<参数表中对象p否
	int operator==(Point& p);	//重载函数：判断当前对象=参数表中对象p否
private:
	int x;
	int y;
	friend istream& operator>>(istream& in, Point& p);			//友元函数：输入
	friend ostream& operator<<(ostream& out, Point& p);		//友元函数：输出
};
#endif
