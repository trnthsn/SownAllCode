#include <iostream>
using namespace std;

void getValue(long arr[][100], long m, long n)
{
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            cin >> arr[i][j];
}

void printArray(long arr[][100], long m, long n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            cout << arr[i][j] << " ";
        cout << endl;
    }
}

void deleteRow(long arr[][100], long m, long n, long x)
{
    for (int i = x - 1; i < m - 1; i++)
        for (int j = 0; j < n; j++)
            arr[i][j] = arr[i + 1][j];
}

int main()
{
    long m, n, x;
    cin >> m >> n;
    long arr[100][100];
    getValue(arr, m, n);
    cin >> x;
    deleteRow(arr, m, n, x);
    printArray(arr, m - 1, n);
    return 0;
}
