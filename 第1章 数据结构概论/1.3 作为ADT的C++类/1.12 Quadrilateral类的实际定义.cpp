class Quadrilateral
{
public:
	Quadrilateral(Point, Point);
	Point getReferencePoint();		//从Polygon类继承的属性
	void isInside(Point);
	void move(Point);						//从Polygon类继承的属性
	void draw();
private:
	Point vertex2;
};