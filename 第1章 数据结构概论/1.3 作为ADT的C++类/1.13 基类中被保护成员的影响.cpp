class Quadrilateral
{
public:
	Quadrilateral(Point, Point);
	Point getReferencePoint();		//��Polygon��̳е�����
	void isInside(Point);
	void move(Point);						//��Polygon��̳е�����
	void draw();
protected:
	Point referencePoint;				//��Polygon��̳е�����
	Point vertex2;
};