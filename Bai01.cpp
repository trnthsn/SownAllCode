#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a = 0;
    int arr[100];
    int countNum = 0;
    while (n != 0)
    {
        a = n % 10;
        n /= 10;
        arr[countNum] = a;
        countNum++;
    }
    cout << countNum;
    return 0;
}
