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
	cout << "��������������" << endl;
	cin >> a >> b;
	cout << "�ϴ����ǣ�" << max(a, b) << endl;
	return 0;
}