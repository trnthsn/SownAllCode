#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    double sum = 0;
    for ( int i = 1; i <= n; i++)
    {
        cout << (double(i)/(double(i+1)));
        cout << " ";
    }
    return 0;
}
