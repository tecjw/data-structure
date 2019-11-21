#include <iostream>
using namespace std;

int squareByValue(int);
void squareByReference(int&);

int main()
{
	int x = 2, z = 4;
	cout << "求平方值前x=" << x << endl << "用squareByValue求平方值"
		<< squareByValue(x) << endl << "求平方值后x=" << x << endl;
	//求平方值前x=2,squareByValue(x)=4,求平方值后x=2
	cout << "求平方值前z=" << x << endl << "用squareByReference求平方"
		<< endl;
	squareByReference(z);
	cout << "求平方值后z=" << z << endl;
	//求平方值前z=4,求平方值后z=16
}

int squareByValue(int a) { return a *= a; }
void squareByReference(int& a) { a *= a; }