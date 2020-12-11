#include <iostream>

using namespace std;

void swap(int &a, int &b)
{
    a = a + b;
    b = a - b;
    a = a - b;
}

int main()
{

    int n, bl1 = 0, bl2 = 1;
    cin >> n;
    double a[100];
    int b[100];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        b[i] = i;
        if (a[i] > 0.05)
        {
            bl1 = 1;
        }
        if ((a[i] > 1) || (a[i] < 0))
        {
            bl2 = 0;
        }
    }

    if (bl2 && (n >= 0))
    {

        if (bl1)
        {

            for (int i = 0; i < n - 1; i++)
            {
                for (int j = i + 1; j < n; j++)
                {
                    if (a[i] < a[j])
                    {
                        swap(a[i], a[j]);
                        swap(b[i], b[j]);
                    }
                }
            }

            for (int i = 0; i < n; i++)
            {
                if (a[i] < 0.05)
                {
                    break;
                }
                else
                {
                    cout << b[i] << ' ';
                    for (int j = i + 1; j < n; j++)
                    {
                        a[j] = a[j] / 2;
                    }
                }
            }
        }
        else
        {
            cout << "No one is alive.";
        }
    }
    else
    {
        cout << "invalid";
    }

    return 0;
}