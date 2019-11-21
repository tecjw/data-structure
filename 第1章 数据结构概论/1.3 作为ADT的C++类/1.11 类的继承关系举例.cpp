#include <iostream>
using namespace std;

class Polygon							//Polygon��Ķ���
{
public:
	Polygon(Point);
	void move(Point);
	void isInside(Point);
	Point getReferencePoint();
	virtual void draw() = 0;
private:
	Point referencePoint;
};

class Quadrilateral :public Polygon	//��Polygon������Quadrilateral�Ķ���
{
public:
	Quadrilateral(Point, Point);
	void isInside(Point);
	void draw();
private:
	Point vertex2;
};