#include <bits/stdc++.h>

using namespace std;

bool xaucon(string a, string b)
{
    int n1 = a.length(), n2 = b.length();
    int i, j, dem = 0;
    if (n1 >= n2)
    {
        for (i = 0; i < n1; i++)
            for (j = 0; j < n2; j++)
            {
                if ((a[i] == b[j] || a[i] == b[j] + 32 || a[i] == b[j] - 32) && (a[i + 1] == b[j + 1] || a[i + 1] == b[j + 1] + 32 || a[i + 1] == b[j + 1] - 32))
                    dem++;
            }
        if (dem >= n2 - 1)
            return 1;
        else
            return 0;
    }
    else
        return 0;
}

int main()
{
    int i, q;
    cin >> q;
    string a, b;
    for (i = 0; i < q; i++)
    {
        cin >> a >> b;
        if (xaucon(a, b))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}