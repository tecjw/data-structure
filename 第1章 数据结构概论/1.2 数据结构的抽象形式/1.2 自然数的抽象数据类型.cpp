ADT NaturalNumber IS
/*objects����Ȼ���������������Ӽ��ϣ�����ʼ��0�������ڻ����ܱ�ʾ���������MAXINT*/
/*{
function:�������е�x,y��NaturalNumber�� + �� - �� < �� == �� = �ȶ��ǿ��õķ���
Zero() : NaturalNumber										����0��
IsZero(x) : Boolean												if (x == 0)����Ture; else ���� False;
Add(x, y) :NaturalNumber									if (x + y <= MAXINT) ����x + y;
																			else ����MAXINT;
Equal(x, y) :Boolean												if (x == y) ���� 1; else ����0;
Successor(x):NaturalNumber								if(x==MAXINT)����x;
																			else ����x+1;
Subtract(x,y):NaturalNumber								if(x<y)����0��else����x-y;
}*/ //NaturalNumber