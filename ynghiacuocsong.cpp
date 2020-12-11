#include <iostream>
using namespace std;

int main()
{
    int a;
    cin >> a ;
    int arr[a];
    for ( int i = 0; i < a ; i++ )
        cin >> arr[i];
    for ( int i = 0; i < a ; i++)
    {
        if ( arr[i] == 42)
        {
            cout << "I've found the meaning of life!";
            break;
        }
        if ( i == a - 1 && arr[i] != 42)
        {
            cout << "It's a joke!" ;
        }
    }
    return 0;
}