#include <iostream>
using namespace std;

void nhapmang(int a[], int n)
    {
        for ( int i = 0; i< n; i++)
            cin >> a[i];
    }
void xuatmang(int a[], int n)
    {
        int sum = 0;
        for ( int i = 0; i < n; i++)
            {
                sum += a[i];
                cout << sum << " ";
            }
    }
int main()
    {
        int n;
        cin>>n;
        int a[n];
        nhapmang(a,n);
        xuatmang(a,n);
        return 0;
    }
