#ifndef POINT_H
#define POINT_H						//In the header file point.h
#include <iostream>
using namespace std;
class Point								//�ඨ��
{
public:										//������
	Point(int, int);						//���캯��
	Point(Point&);						//���ƹ��캯��
	~Point();								//��������
	int get_x();							//��ȡ����
	int get_y();
	void put_x(int a);
	void put_y(int b);
	Point operator+(Point& p);	//���غ�������ǰ����+�������ж���p
	Point operator*(int i);			//���غ�������ǰ����*�������ж���p
	int operator>(Point p);			//���غ������жϵ�ǰ����>�������ж���p��
	int operator<(Point p);			//���غ������жϵ�ǰ����<�������ж���p��
	int operator==(Point& p);	//���غ������жϵ�ǰ����=�������ж���p��
private:
	int x;
	int y;
	friend istream& operator>>(istream& in, Point& p);			//��Ԫ����������
	friend ostream& operator<<(ostream& out, Point& p);		//��Ԫ���������
};
#endif
