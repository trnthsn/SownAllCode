#include <iostream> 
using namespace std;

void inputArray(int arr[100][2], int n)
{
    for (int i = 0; i < n; i++)
        for (int j = 0; j < 2; j++)
            cin >> arr[i][j];
}

void splitNum(int n, int checkNum)
{
    int a = 0;
    int dem = 1;
    int arr[100];
    int vitri = 0;
    bool check = false;
    while (n > 0)
    {
        a = n % 10;
        n /= 10;
        arr[dem] = a;
        dem++;
    }
    for (int i = dem; i > 0; i--)
        if (arr[i] == checkNum)
        {
            vitri = i;
            check = true;
            break;
        }
    if (check == 1)
        cout << dem - vitri << endl;
    else
        cout << "-1" << endl;
}

int main()
{
    int n;
    cin >> n;
    int arr[100][2];
    inputArray(arr, n);
    for (int i = 0; i < n; i++)
        splitNum(arr[i][0], arr[i][1]);
    return 0;
}
