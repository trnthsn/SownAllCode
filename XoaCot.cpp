#include <iostream>
using namespace std;

void inputValue(long arr[][1000], long m, long n)
{
    for (long i = 0; i < m; i++)
        for (long j = 0; j < n; j++)
            cin >> arr[i][j];
}

void deleteColumn(long arr[][1000], long m, long n, long x)
{
    for (long i = 0; i < m; i++)
        for (long j = x - 1; j < n - 1; j++)
        {
            arr[i][j] = arr[i][j + 1];
        }
}

void printArray(long arr[][1000], long m, long n)
{
    for (long i = 0; i < m; i++)
    {
        for (long j = 0; j < n - 1; j++)
            cout << arr[i][j] << " ";
        cout << endl;
    }
}

int main()
{
    long m, n;
    long x;
    cin >> m >> n;
    long arr[1000][1000];
    inputValue(arr, m, n);
    cin >> x;
    deleteColumn(arr, m, n, x);
    printArray(arr, m, n);
    return 0;
}