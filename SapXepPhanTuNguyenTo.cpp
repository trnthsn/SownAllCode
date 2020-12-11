#include <iostream>
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


void sapxep(int a[], int n)
{
    int temp = 0;
    for ( int i = 0; i < n; i++)
    {
        for ( int j = i + 1; j < n; j++)
        {
            if ( a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}


bool isPrime(int n)
{
    if (n <= 1)
        return false;

    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;

    return true;
}


int main()
{
    int n, count_prime,j;
    count_prime = 0;
    j = 0;
    cin >> n;
    int arr[n];
    nhapmang(arr,n);

    for ( int i = 0; i < n; i++)
        if ( isPrime(arr[i]) == 1)
            count_prime++;
    int arr1[count_prime];

    for ( int i = 0; i < n; i++)
        if ( isPrime(arr[i]) == 1)
        {
            arr1[j] = arr[i];
            j++;
        }
    int bienmoi = 0 ;
    sapxep(arr1,count_prime);
    for ( int i = 0; i < n; i++)
        if ( isPrime(arr[i]) == 1)
        {
            arr[i] = arr1[bienmoi++];


        }

//xuatmang(arr1, count_prime);
    xuatmang(arr,n);

    return 0;

}
