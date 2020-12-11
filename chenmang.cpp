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

void chen(int arr[], int &n , int vt, int sochen)
{
    for ( int i = n; i>= vt; i--)
    {
        arr[i] = arr[i-1];
    }
    arr[vt-1] = sochen;
    n++;
}

int main()
    {
        int n;
        cin >> n;
        int arr[n];
        nhapmang(arr,n);
        int sochen, vt;
        cin >> sochen >> vt;
        chen(arr,n,vt,sochen);
        xuatmang(arr,n);
        return 0;

    }
