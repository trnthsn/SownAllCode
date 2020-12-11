#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int main()
{
    int a;
    float c[14];
    float thuchanh, giuaky, cuoiky = 0, d, e, f;
    int h, g = 0;
    cin >> a;
    //Diem thuc hanh//
    for (int i = 0; i < 10; i++)
    {
        cin >> c[i];
    }
    for (int i = 0; i < 9; i++)
    {
        for (int j = i + 1; j < 10; j++)
        {
            if (c[j] > c[i])
            {
                a = c[i];
                c[i] = c[j];
                c[j] = a;
            }
        }
    }
    for (int i = 0; i < 5; i++)
    {
        g = g + c[i];
    }
    d = g / 5;
    //Diem giua ki//
    for (int i = 11; i < 13; i++)
    {
        cin >> c[i];
        giuaky = giuaky + c[i];
    }
    e = giuaky / 2;
    //Diem cuoi ki//
    for (int i = 12; i < 14; i++)
    {
        cin >> c[i];
        cuoiky = cuoiky + c[i];
    }
    f = d * 0.2 + 0.2 * e + 0.6 * cuoiky;
    if (f >= 10)
        cout << "10.0";
    else if (c[5] == 0 && c[6] == 0 && c[7] == 0 && c[8] == 0 && c[9] == 0)
        cout << "0.0";
    else
        cout << setprecision(1) << fixed << f << endl;
    return 0;
}