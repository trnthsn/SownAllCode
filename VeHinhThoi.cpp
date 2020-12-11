#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int j;
    for (int i = 0; i < 2 * n + 1; i++)
    {
        if (i < n + 1) // draw above part
        {
            for (j = 0; j < n - i; j++) // draw . character
                cout << ". ";
            for (j = 0; j <= 2 * i; j++) // draw * character
                cout << "* ";
            for (j = 0; j < n - i; j++)
                cout << ". ";
        }
        else // draw bottom part
        {
            for (j = 0; j < i - n; j++)
                cout << ". ";
            for (j = 0; j < 4 * n - 2 * i + 1; j++)
                cout << "* ";
            for (j = 0; j < i - n; j++)
                cout << ". ";
        }
        cout << endl;
    }
}
