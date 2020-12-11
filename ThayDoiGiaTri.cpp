#include <iostream>
using namespace std;

void inputArray(long arr[][1000], long m, long n)
{
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            cin >> arr[i][j];
}

void printArray(long arr[][1000], long m, long n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            cout << arr[i][j] << " ";
        cout << endl;
    }
}

int main()
{
    long m, n;
    cin >> m >> n;
    long arr[1000][1000];
    inputArray(arr, m, n);
    printArray(arr, m, n);
    return 0;
}