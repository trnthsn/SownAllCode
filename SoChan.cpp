#include <iostream>
using namespace std;

bool isPrime(int n)
{
    if (n < 0)
        return false;
    if (n > 0)
        for (int i = 2; i < n; i++)
            if (n % i == 0)
                return false;
    return true;
}

int main()
{
    for (int i = 1; i <= 100; i++)
        if (isPrime(i) == 1)
            cout << i << " ";
    return 0;
}