#include <iostream>
using namespace std;

int sum(int a[], int n)
{
	if (n > 0) return a[n - 1] + sum(a, n - 1);
	else return 0;
}