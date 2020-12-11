#include <iostream>
#include <cmath>

using namespace std;
// a^2 + b^2 + c^2 + d^2
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            for (int k = 1; k <= n; k++)
            {
                for (int h = 1; h <= n; h++)
                {
                    for (int m = 1; m <= n; m++)
                    {
                        /*if (pow(i, 5) + pow(j, 5) + pow(k, 5) + pow(h, 5) == pow(m, 5))
                            cout << i << "^5"
                                 << " + " << j << "^5"
                                 << " + " << k << "^5"
                                 << " + " << h << "^5"
                                 << " = " << m << "^5";
                        */
                        cout << i << ' ' << j << " " << k << " " << h << " " << m << " ";
                    }
                }
            }
        }
    }
    return 0;
}