#include <iostream>
#include <cstring>
using namespace std;

void addCharacter(char s[], int address, char c, int &n)
{
    for (int i = n - 1; i >= address; i--)
        s[i + 1] = s[i];
    s[address] = c;
    n++;
}

void printString(char s[], int &n)
{
    for (int i = 0; i < n; i++)
        cout << s[i];
}

int main()
{
    char s[100];
    cin >> s;
    int n = strlen(s);
    int address;
    char c;
    cin >> address >> c;
    addCharacter(s, address, c, n);
    printString(s, n);
    return 0;
}
