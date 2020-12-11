#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    if ( a >= 6 && a <= 21 && b >= 6 && b <= 21)
        if ( b < 17 )
        {
            cout << (( b - a )*2500)*c;
        }
    else if ( a > 17 )
        {
            cout << ( b - a )*3000*c;
        }
    else if ( a < 17 && b > 17)
        {
            cout << (( 17 - a )*2500 + ( b - 17 )*3000 )*c;
        }
    return 0;
}
