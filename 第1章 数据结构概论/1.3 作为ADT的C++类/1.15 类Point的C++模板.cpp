#include <iostream>
using namespace std;

template <class T>
class Point
{
public:
	Point(T, T);
	Point(Point& p);
	T get_x();
	T get_y();
	...//��������
private:
	T x;
	T y;
};