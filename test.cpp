#include <iostream>
using namespace std;

void nhapmang(int arr[],int n)
{
    for (int i = 0; i < n; i++)
        cin >> arr[i];
}

void tachso(int &a)
{
    int demLe = 0;
    int demChan = 0;
    int n;
    int demSoChuSo = 0;
    while (a > 0)
    {
        n = a % 10;
        a /= 10;
        if (n != 0)
            demSoChuSo++;
        if ( n % 2 == 0)
        {
            demChan++;
        }
        else
            demLe++;
    }
    if (demChan == demSoChuSo || demLe == demSoChuSo)
        cout << "yes" << endl;
    else
        cout << "no" << endl;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    nhapmang(arr, n);
    for (int i = 0; i < n; i++)
        tachso(arr[i]);
    return 0;
    system("pause");
}

