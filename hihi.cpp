#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    if ( b == 0 )
        cout << "no";
    if ( a % b == 0 && b != 0 )
        cout << "yes";
    else
        cout << "no";
    return 0;

}
