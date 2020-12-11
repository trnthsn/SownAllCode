#include <iostream>
using namespace std;

void nhapMang(long long arr[], int n)
{
    for (int i = 0; i < n; i++)
        cin >> arr[i];
}

void SapXep(int arr[], int n)
{
    int temp = 0;
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
}

void countCharacter(long long n)
{
    int a = 0;
    int dem = 0;
    int arr[100];
    while (n > 0)
    {
        a = n % 10;
        n /= 10;
        arr[dem] = a;
        dem++;
    }
    SapXep(arr, dem);
    for (int i = 0; i < dem; i++)
        cout << arr[i];
    cout << endl;
}

void xuatmang(long long arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}

int main()
{
    int n;
    cin >> n;
    long long arr[n];
    nhapMang(arr, n);
    for (int i = 0; i < n; i++)
        countCharacter(arr[i]);
//    xuatmang(arr, n);
    return 0;
}
