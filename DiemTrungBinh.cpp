#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n;
    cin >> n;
    double sum = 0;
    double a[n];
    for ( int i = 0; i < n; i++)
        cin >> a[i];
    for ( int i = 0; i < n; i++)
        sum += a[i];
    cout << fixed << showpoint << setprecision(2);
    cout << sum/n;
    return 0;
}
