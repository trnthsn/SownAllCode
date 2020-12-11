#include <iostream>

using namespace std;
int main()
{
    int m, n;
    cin >> m;
    cin >> n;
    int a[m][n];
    int q;
    cin >> q;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    for (int k = 0; k < q; k++)
    {
        int x, y;
        cin >> x;
        cin >> y;

        cout << a[x - 1][y - 1] << endl;
    }
    return 0;
}
