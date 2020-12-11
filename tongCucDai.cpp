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

void tongcucdai(int arr[], int n)
{
    int sum = 0;
    if ( arr[0] > arr[1])
            sum += arr[0];

    for ( int i = 1; i < n   ; i++)
    {
        if ((arr[i-1] < arr[i]) && ( arr[i] > arr[i + 1]))
            sum += arr[i];
        else if ( arr[i] == arr[n])
                if ( arr[n] > arr[n-1])
                    sum += arr[n];
    }
    cout <<   sum;
}

int main()
{
    int n;
    cin >> n;
    int sum = 0;
    int arr[n];
    nhapmang(arr,n);
    tongcucdai(arr,n);
    return 0;
}
