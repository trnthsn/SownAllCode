#include <iostream>
#include <iomanip>

using namespace std;

/*
void inputArray(double a[][], int &n)
{
    for ( int i = 0; i < n; i++)
    {
        for ( int j = 0; j < 2; j++)
        {
            cin >> a[i][j];
        }
    }
}
*/
/*
double outputAverage(double a[][], int &n)
{
    double sum = 0;
    double average = 0;
    for ( int i = 0; i < n; i++)
    {
        sum += arr[i][0] * arr[i][1];
    }
    cout << sum;
}
*/

int main()
{
    int n;
    cin >> n;

    double arr[n][2];

    for ( int i = 0; i < n; i++)
    {
        for ( int j = 0; j < 2; j++)
        {
            cin >> arr[i][j];
        }
    }

    double sum = 0;
    double fre = 0;
    for ( int i = 0; i < n; i++)
    {
        sum += arr[i][0] * arr[i][1];
    }

    for ( int i = 0; i < n; i++)
    {
        fre += arr[i][1];
    }

    double average = sum/fre;

    cout << fixed << showpoint << setprecision(2);
    cout << average;

    return 0;

}
