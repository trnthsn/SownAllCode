#include <iostream>
#include <iomanip>
using namespace std;

double sum(double x)
{
    int i = 1;
    double sum = 1;
    double temp = 1;
    double oldSum = 0;
    while (sum - oldSum > 0.001)
    {
        oldSum = sum;
        sum = sum + temp;
        temp *= x/i;
        i++;
    }
    return sum;

}

int main()
{
    double x;
    cin >> x;
    cout << fixed << showpoint << setprecision(4);
    cout << sum(x);
    return 0;
}
