#include <iostream>
using namespace std;

void inputArray(int arr[][1000], int m, int n)
{
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            cin >> arr[i][j];
}

void inputArrayAddress(int arr[][2], int m, int n)
{
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            cin >> arr[i][j];
}

void answer(int arr[][1000], int x, int y)
{
    cout << arr[x - 1][y - 1];
    cout << endl;
}

int main()
{
    int m, n, q;
    cin >> m >> n >> q;
    int arr[1000][1000];
    int address[1000][2];
    int p = 2;
    inputArray(arr, m, n);
    inputArrayAddress(address, q, 2);
    for (int i = 0; i < q; i++)
    {
        int x = address[i][0];
        int y = address[i][1];
        answer(arr, x, y);
    }
    return 0;
}
