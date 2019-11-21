#include <iostream>
using namespace std;

char& replace(int m);
char s[80] = "Hello There";

int main()
{
	replace(5) = 'x';
	cout << s;
}

char& replace(int m)
{
	return s[m];
}