#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
    int money, time;
    cin >> money >> time;

    long moneyAfterNmonth = money;

    for ( int i = 1; i <= time; i++ )
    {
        moneyAfterNmonth *= 1.007;
    }

    cout << fixed << setprecision(0);
    cout << moneyAfterNmonth;
    return 0;
}
