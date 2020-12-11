#include <iostream>
#include <iomanip>
using namespace std;

double sum(int x)
{
    double sum = 1;
    int i = 1;
    double temp = x;
    while (temp > 1e-10)
    {
        sum += temp;
        i++;
        temp = temp * x / i;
    }
    return sum;
}

int main()
{
    int x;
    cin >> x;
    cout << fixed << showpoint << setprecision(4);
    cout << sum(x);
    return 0;
}
