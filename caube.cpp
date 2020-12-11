#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
float sohang(float x, int n)
{
    int a;
    float temp = 1;
    if (n % 2 == 0)
        a = 1;
    else
        a = -1;
    for (int i = 1; i <= 2 * n + 1; i++)
        temp = temp * x / i;
    return a * temp;
}
int main()
{
    float x;
    float sin = 0;
    cin >> x;
    int n = 0;
    while (abs(sohang(x, n)) > 0.0001)
    {
        sin += sohang(x, n);
        n++;
    }
    cout << fixed << showpoint << setprecision(4);
    cout << sin << endl;
    system ("pause");
    return 0;
}