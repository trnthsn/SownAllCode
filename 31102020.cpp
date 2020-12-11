#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int a[100];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	int x, y;
	cin >> x >> y;
	int m = 0;
	for (int i = 0; i < n; i++)
	{
		m = a[x - 1];
		a[x - 1] = a[y - 1];
		a[y - 1] = m;
	}
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
	return 0;
}
