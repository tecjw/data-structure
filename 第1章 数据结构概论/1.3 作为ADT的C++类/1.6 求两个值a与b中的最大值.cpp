#include <iostream>
using namespace std;

int max(int a, int b)
{
	if (a > b)
		return a;
	else
		return b;
}

int main()
{
	int a, b;
	cout << "请输入两个数：" << endl;
	cin >> a >> b;
	cout << "较大者是：" << max(a, b) << endl;
	return 0;
}