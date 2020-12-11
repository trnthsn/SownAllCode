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


bool find_odd(int n)
{
    if ( n % 2 == 0)
        return false;
    return true;
}



int main()
{
    int n, count_odd, k,j;
    count_odd = 0;
    j = 0;
    cin >> n;
    int arr[n];
    nhapmang(arr,n);

    for ( int i = 0; i < n; i++)
        if ( find_odd(arr[i]) == 1)
            count_odd++;

    int arr1[count_odd];

    for ( int i = 0; i < n; i++)
        if ( find_odd(arr[i]) == 1)
        {
            arr1[j] = arr[i];
            j++;
        }

    int kkk =0 ;

    sapxep(arr1,count_odd);

    for ( int i = 0; i < n; i++)
        if ( find_odd(arr[i]) == 1)
        {
            arr[i] = arr1[kkk++];


        }

    xuatmang(arr,n);

    return 0;

}
