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


int main()
{
    int n;
    cin >> n;
    int j = 0;
    int a[n];
    int count_even = 0;
    for (int i = 0; i < n; i++)
        if ( i % 2 == 0)
            count_even++;
    int a1[count_even];

    nhapmang(a,n);
    for ( int i =  1; i < n-1 ; i += 2)
        {
            a1[j] = a[i];
            j++;
        }
    xuatmang(a1,count_even);
    return 0;

}
