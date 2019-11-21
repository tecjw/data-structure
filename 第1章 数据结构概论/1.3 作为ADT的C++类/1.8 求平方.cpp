#include <iostream>
using namespace std;

int squareByValue(int);
void squareByReference(int&);

int main()
{
	int x = 2, z = 4;
	cout << "��ƽ��ֵǰx=" << x << endl << "��squareByValue��ƽ��ֵ"
		<< squareByValue(x) << endl << "��ƽ��ֵ��x=" << x << endl;
	//��ƽ��ֵǰx=2,squareByValue(x)=4,��ƽ��ֵ��x=2
	cout << "��ƽ��ֵǰz=" << x << endl << "��squareByReference��ƽ��"
		<< endl;
	squareByReference(z);
	cout << "��ƽ��ֵ��z=" << z << endl;
	//��ƽ��ֵǰz=4,��ƽ��ֵ��z=16
}

int squareByValue(int a) { return a *= a; }
void squareByReference(int& a) { a *= a; }