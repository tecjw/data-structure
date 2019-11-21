ADT NaturalNumber IS
/*objects：自然数是整数的有序子集合，它开始于0，结束于机器能表示的最大整数MAXINT*/
/*{
function:对于所有的x,y∈NaturalNumber， + 、 - 、 < 、 == 、 = 等都是可用的服务
Zero() : NaturalNumber										返回0；
IsZero(x) : Boolean												if (x == 0)返回Ture; else 返回 False;
Add(x, y) :NaturalNumber									if (x + y <= MAXINT) 返回x + y;
																			else 返回MAXINT;
Equal(x, y) :Boolean												if (x == y) 返回 1; else 返回0;
Successor(x):NaturalNumber								if(x==MAXINT)返回x;
																			else 返回x+1;
Subtract(x,y):NaturalNumber								if(x<y)返回0；else返回x-y;
}*/ //NaturalNumber