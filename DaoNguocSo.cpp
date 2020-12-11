#include <iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;

    int a = num / 100;

    int b = (num - 100 * a) / 10;

    int c = (num - 100 * a) % 10;

    if (a < c)
    {
        cout << "invalid";
    }
    if (a > c)
    {
        int num1 = 100 * c + 10 * b + a;

        int num2 = num - num1;

        int d = num2 / 100;
        int e = (num2 - 100 * d) / 10;
        int f = (num2 - 100 * d) % 10;
        if (d != 0)
        {
            int num3 = f * 100 + e * 10 + d;

            cout << (num2 + num3);
        }
        else if (d == 0)
        {
            int num3 = e * 10 + d;
            cout << (num2 + num3);
        }
    }
    return 0;
}
