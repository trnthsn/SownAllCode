#include <iostream>
using namespace std;
int Dao_Nguoc(int n)
{
    int sdn = 0;
    while (n != 0)
    {
        sdn = sdn * 10 + n % 10;
        n = n / 10;
    }
    return sdn;
}
int main()
{
    int a, b;
    cin >> a;
    if (a / 100 > a % 10)
    {
        b = a - Dao_Nguoc(a);
        cout << b + Dao_Nguoc(b);
    }
    else
    {
        cout << "invalid";
    }
    return 0;
}