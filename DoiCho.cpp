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

void replaceArray(int arr[][100], int x1, int y1, int x2, int y2)
{
    int temp = 0;
    temp = arr[x1 - 1][y1 - 1];
    arr[x1 - 1][y1 - 1] = arr[x2 - 1][y2 - 1];
    arr[x2 - 1][y2 - 1] = temp;
}

int main()
{
    int m, n;
    int x1, y1, x2, y2;
    int arr[100][100];
    cin >> m >> n;
    inputArray(arr, m, n);
    cin >> x1 >> y1 >> x2 >> y2;
    replaceArray(arr, x1, y1, x2, y2);
    outputArray(arr, m, n);
    return 0;
}