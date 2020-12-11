#include <iostream>
using namespace std;

int recursion(int n)
{
	int sum = 0;
	while (n != 0)
		if (n % 2 == 1)
			return sum = recursion(n - 1) + n;
		else if (n % 2 == 0)
			return sum = recursion(n - 1) - n;
	return sum;
}

int main()
{
	int n;
	cin >> n;
	cout << recursion(n);
	return 0;
}