#include <iostream>
#include <cstring>

using namespace std;
int main()
{
    char s[100];
    int a;
    cin >> s;
    cin >> a;
    int n = strlen(s);
    for (int i = a; i < n - 1; i++)
        s[i] = s[i + 1];
    for (int i = 0; i < n - 1; i++)
        cout << s[i];
    return 0;
}