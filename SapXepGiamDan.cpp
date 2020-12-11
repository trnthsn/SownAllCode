#include<iostream>
using namespace std;

void nhapmang(int a[], int n)
{
    for ( int i = 0; i < n; i++)
        cin >> a[i];
}

void xuatmang(int a[], int n)
{
    for ( int i = 0; i < n; i++)
        cout << a[i] <<" ";
}

void sapxep(int a[], int n)
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

int main()
{
    int n;
    cin >> n;
    int a[n];
    nhapmang(a,n);
    sapxep(a,n);
    xuatmang(a,n);
    return 0;
}
