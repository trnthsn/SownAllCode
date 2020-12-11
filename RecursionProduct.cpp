#include <iostream>
using namespace std;

long recursion(int n)
{
	long sum = 1;
	while (n > 0)
		if (n % 2 == 1)
			return sum = n * recursion(n - 2);
	return sum;
}

int main()
{
	int n;
	cin >> n;
	cout << recursion(2*n + 1);
	return 0;
}