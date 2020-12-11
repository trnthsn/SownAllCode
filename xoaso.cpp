#include<iostream>
using namespace std;

void nhapmang(int arr[],int n)
{
    for ( int i = 0; i < n; i++)
        cin >> arr[i];
}

void xuatmang(int arr[], int n)
{
    for ( int i = 0; i < n; i++)
        cout << arr[i] << " ";
}

void xoa(int arr[], int &n , int vt)
{
    for ( int i = vt - 1 ; i <= n ; i++)
    {
        arr[i] = arr[i+1];
    }
    n--;
}

int main()
    {
        int n;
        cin >> n;
        int arr[n];
        nhapmang(arr,n);
        int  vt;
        cin  >> vt;
        xoa(arr,n,vt);
        xuatmang(arr,n);
        return 0;

    }
