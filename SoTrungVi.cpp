#include <iostream>
#include <iomanip>

using namespace std;

void nhapmang(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cin >> arr[i];
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    nhapmang(arr, n);
    double check = double(n) / 2;
    if (check == n / 2)
    {
        float result = (float(arr[int(check)]) + float(arr [int(check) + 1])) / 2;
        cout << fixed << showpoint << setprecision(1);
        cout << result;
    }
    else
    {
        int vitri = check;
        cout << fixed << showpoint << setprecision(1);
        cout << float(arr[vitri]) << endl;
    }

    return 0;
}
