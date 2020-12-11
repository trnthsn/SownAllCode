#include <iostream>
#include <string>

using namespace std;
int main()
{
    char s[100];
    int a, b;
    cin >> s;
    cin >> a >> b;
    char temp;
    temp = s[a];
    s[a] = s[b];
    s[b] = temp;
    cout << s;
}