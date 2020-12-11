#include <iostream>
using namespace std;

void nhapmang(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cin >> arr[i];
}

bool isPrime(int n)
{
    if (n <= 1)
        return false;

    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;
    return true;
}

void countPrime(int n)
{
    int dem = 0;
    int remainder = 0;
    while (n > 0)
    {
        remainder = n % 10;
        n /= 10;
        if (isPrime(remainder) == 1)
        {
            dem++;
        }
    }
    cout << dem << endl;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    nhapmang(arr, n);
    for (int i = 0; i < n; i++)
        countPrime(arr[i]);
    return 0;
}