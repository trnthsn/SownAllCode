#include <iostream>
#include <sstream>
using namespace std;

void nhapmang(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
}

void tachsovacheck(int a[], int n)
{
    string tachso[n][100];
}

void xuatmang(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    string result;
    nhapmang(a, n);
    //   xuatmang(a, n);
    ostringstream convert;
    convert << a[0];
    result = convert.str();
    cout << result;
    return 0;
}
