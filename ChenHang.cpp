#include <iostream>
using namespace std;

void inputArray(int arr[][100], int m, int n)
{
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            cin >> arr[i][j];
}

void outputArray(int arr[][100], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            cout << arr[i][j] << " ";
        cout << endl;
    }
}

void replaceArray(int arr[][100], int m, int n, int x, int y)
{
    for (int i = m; i >= x; i--)
    {
        for (int j = 0; j < n; j++)
            arr[i][j] = arr[i - 1][j]; // replace value down 1
    }
    for (int i = 0; i < n; i++)
        arr[x - 1][i] = y; // write value to array
}

int main()
{
    int m, n;
    int x, y;
    int arr[100][100];
    cin >> m >> n;
    inputArray(arr, m, n);
    cin >> x >> y;
    replaceArray(arr, m, n, x, y);
    outputArray(arr, m + 1, n);
    return 0;
}