#include <iostream>
using namespace std;

void nhapmang(int arr[],int n)
{
    for (int i = 0; i < n; i++)
        cin >> arr[i];
}

void tachso(int &a, int &mangtam[])
{
    int i = 0;
    int vitri = 0;
    int remainder = 0;
    while (a > 0)
    {
        remainder = a%10;
        a /= 10;
        remainder = arr[i];
        i++;
    }

}

void xuatmang(int &mangtam[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << ;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    int mangtam[100];
    nhapmang(arr, n);
    for (int i = 0; i < n; i++)
        tachso(arr[i], mangtam);
    xuatmang(mangtam, 5);
    return 0;
    system("pause");
}

