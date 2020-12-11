#include <iostream>
using namespace std;

void inputArray(long arr[][1000], long m, long n)
{
    for (long i = 0; i < m; i++)
        for (long j = 0; j < n; j++)
            cin >> arr[i][j];
}

long calculateValue(long arr[][1000], long m, long n)
{
    long sum = 0;
    for (long i = 0; i < n; i++)
        sum += arr[m][i];
    return sum;
}

int main()
{
    long m, n;
    cin >> m >> n;
    long arr[1000][1000];
    inputArray(arr, m, n);
    for (long i = 0; i < m; i++)
        cout << calculateValue(arr, i, n) << " ";
    return 0;
}