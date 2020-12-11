#include <iostream>
using namespace std;
int pascal(int j, int i)
{
    if (j == 0 || j == i)
        return 1;
    if (j == 1)
        return i;
    return pascal(j - 1, i - 1) + pascal(j, i - 1);
}
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << pascal(j, i) << " ";
        }
        cout << endl;
    }
    return 0;
}