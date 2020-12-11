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

void getOdd(int arr[], int arrOdd[], int n)
{
    int k = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 1)
        {
            arrOdd[k] = arr[i];
            k++;
        }
    }
}

void getEven(int arr[], int arrEven[], int n)
{
    int k = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            arrEven[k] = arr[i];
            k++;
        }
    }
}

int main()
{
    int n;
    int arr[100];
    int arrOdd[100];
    int arrEven[100];
    int demChan = 0;
    cin >> n;
    nhapMang(arr, n);
    getOdd(arr, arrOdd, n);
    getEven(arr, arrEven, n);

    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
            demChan++;
    }

    int demLe = n - demChan;

    sapxepgiam(arrOdd, demLe);
    sapxeptang(arrEven, demChan);

    xuatmang(arrEven, demChan);
    xuatmang(arrOdd, demLe);

    return 0;
}
