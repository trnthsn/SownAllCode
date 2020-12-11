#include <iostream>
using namespace std;



int main()
{
    int Num1, Num2;
    cin >> Num1 >> Num2;
    int arr1[100], arr2[100];
    int dem1 = 0;
    int dem2 = 0;
    int sum1 = 0;
    int sum2 = 0;
    for (int i = 1; i < Num1; i++)
    {
        if (Num1 % i == 0)
        {
            arr1[dem1] = i;
            dem1++;
        }
    }
    for (int i = 1; i < Num2; i++)
    {
        if (Num2 % i == 0)
        {
            arr2[dem2] = i;
            dem2++;
        }
    }
    for (int i = 0; i < dem1; i++)
    {
        sum1 += arr1[i];
    }
    for (int i = 0; i < dem2; i++)
    {
        sum2 += arr2[i];
    }
    if (sum1 == Num2 && sum2 == Num1)
    {
        cout << "true" << endl;
    }
    else 
        cout << "false" << endl;
    return 0;

}