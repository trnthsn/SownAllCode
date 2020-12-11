#include <iostream>
#include <iomanip>

using namespace std;

void nhapmang(double a[], int n)
{
    for ( int i = 0; i < n; i++)
        cin >> a[i];
}

void sapxep(double a[], int n)
{
    int temp = 0;
    for ( int i = 0; i < n; i++)
    {
        for ( int j = i + 1; j < n; j++)
        {
            if ( a[i] < a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}


int main ()
{
    int lt;
    int i;
    double sum, sumgk;
    double tk, th, gk;
    double a[10];
    double a1[2];
    double a2[2];

    int chuyencan = 0;
    sum = 0;
    sumgk = 0;

    cin >> lt;

    nhapmang(a,10);
    nhapmang(a1,2);
    nhapmang(a2,2);
    sapxep(a,10);

    for ( i = 0; i < 5; i++)
    {
        sum += a[i];
        th = sum / 5;

    }

    for ( i = 0; i < 2; i++)
    {
        sumgk += a1[i];
        gk = sumgk / 2;
    }

    for ( int i = 0; i < 10; i++)
    {
        if ( a[i] != 0 )
        {
            chuyencan++;
        }
    }
    chuyencan += lt;

    int stck = a2[1] + a2[0] ;


    if ( chuyencan < 20 )
    {
        tk = 0;
        cout << fixed << showpoint << setprecision(1);
        cout << tk;
    }

    if ( chuyencan >= 20)
    {
        double diemtb = 0.2 * th + 0.2 * gk + stck * 0.6;
        cout << fixed << showpoint << setprecision(1);
        cout << diemtb ;
    }

    return 0;
}

