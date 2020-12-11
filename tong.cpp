#include <iostream>
using namespace std;

int sum(int n)
{
    int sum = 0;
    for (int i = 1; i < n; i++)
        if (n % i == 0)
        {
            sum += i;
        }
    return sum;
}

int main()
{
    int Num1, Num2;
    cin >> Num1 >> Num2;
    int sum1 = 0;
    int sum2 = 0;
    sum1 = sum(Num1);
    sum2 = sum(Num2);
    if (sum1 == Num2 && sum2 == Num1)
    {
        cout << "true" << endl;
    }
    else
        cout << "false" << endl;
    return 0;

}
