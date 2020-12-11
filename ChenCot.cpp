#include <iostream>
using namespace std;

void inputArray(int arr[][100], int m, int n)
{
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            cin >> arr[i][j];
}

void replaceArray(int arr[][100], int m, int n, int x, int y)
{
    for (int i = 0; i < m; i++)
        for (int j = n; j >= x; j--)
        {
            arr[i][j] = arr[i][j - 1];
        }
    for (int i = 0; i < m; i++)
    {
        arr[i][x - 1] = y;
    }
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

int main()
{
    int m, n;
    cin >> m >> n;
    int arr[100][100];
    inputArray(arr, m, n);
    int x, y;
    cin >> x >> y;
    replaceArray(arr, m, n, x, y);
    outputArray(arr, m, n + 1);
    return 0;
}
