class Quadrilateral
{
public:
	Quadrilateral(Point, Point);
	Point getReferencePoint();		//��Polygon��̳е�����
	void isInside(Point);
	void move(Point);						//��Polygon��̳е�����
	void draw();
private:
	Point vertex2;
};