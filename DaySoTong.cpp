#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    a[0] = 1;
    a[1] = 1;
    for ( int i = 2; i <= n ; i++)
    {
        a[i] = 2 * a[i - 1] + a[i - 2] + 1;
    }
    cout << a[n];
    return 0;
}
