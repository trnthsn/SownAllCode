#include <iostream>
using namespace std;

long factorial(int n) // hàm tính giai thừa
{
	long sum = 1;
	while (n > 0)
		return sum = n * factorial(n - 1);
	return sum;

}

long sumFactorial(long n) // hàm tính tổng giai thừa
{
	long sum = 0;
	int i = 1;

		while(i < n)
		{
			return sum = sum + factorial(i);
			i++;
		}
	return sum;
}

int main()
{
	int n;
	cin >> n;
	cout << sumFactorial(n);
	return 0;
}