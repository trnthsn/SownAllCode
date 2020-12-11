#include<iostream>>
using namespace std;

int main()
{
    int a;
    int k = 0;
    cin >> a;
    for (int i = 1; i <= a/2 + 1; i++)
        for (int j = 1; j < a/2; j++)
            cout << "." ;
        return 0;
}
