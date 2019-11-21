#include <iostream>
using namespace std;

class Polygon							//Polygon类的定义
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

class Quadrilateral :public Polygon	//类Polygon的子类Quadrilateral的定义
{
public:
	Quadrilateral(Point, Point);
	void isInside(Point);
	void draw();
private:
	Point vertex2;
};