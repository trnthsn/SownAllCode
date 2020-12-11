#include <iostream>
using namespace std;

void sapxeptang(int a[], int n)
{
    int temp = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

void sapxepgiam(int a[], int n)
{
    int temp = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] < a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

void nhapMang(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}

void xuatmang(int a[], int n)
{
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
}

void getNegative(int arr[], int arrNegative[], int n)
{
    int k = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            arrNegative[k] = arr[i];
            k++;
        }
    }
}

void getPositive(int arr[], int arrPositive[], int n)
{
    int k = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            arrPositive[k] = arr[i];
            k++;
        }
    }
}

int main()
{
    int n;
    int arr[100];
    int arrNegative[100];
    int arrPositive[100];
    int demDuong = 0;
    cin >> n;
    nhapMang(arr, n);
    getNegative(arr, arrNegative, n);
    getPositive(arr, arrPositive, n);

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0 )
            demDuong++;
    }

    int demAm = n - demDuong;

    sapxepgiam(arrNegative, demAm);
    sapxeptang(arrPositive, demDuong);

    int k = 0;
    int j = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            arr[i] = arrNegative[k];
            k++;
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            arr[i] = arrPositive[j];
            j++;
        }
    }

    xuatmang(arr , n);
    return 0;
}
