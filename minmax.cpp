#include <iostream>
using namespace std;
int main()
{
    int a[100];
    for (int i = 0; i < 3; i++)
        cin >> a[i];
    int temp = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = i + 1; j < 3; j++)
        {
            if (a[i] < a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    cout << a[0] << " " << a[2];
    return 0;
}
