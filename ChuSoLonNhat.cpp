#include<iostream>

using namespace std;
int main()
{
    string s;
    cin >> s;
    int max = s[0];
    for ( int i = 0; i < s.length(); i++)
    {
        if ( s[i] > max )
        {
            max = s[i];
        }
    }
    cout << char(max);

    return 0;
}
