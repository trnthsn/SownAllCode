#include <iostream>
#include <cstring>
#include <string>

using namespace std;

void upcase(string s, string s2) //upcase all the character in string
{
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            s[i] -= 32;
        }
    }
    //cout << s << endl;
}

void removeLowercase(string s, string s2) //get upcase character from string s
{
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            s2 += s[i];
        }
    }
    cout << s2 << endl;
}

bool check(string s, string s1) // check if substring appear in string s
{

    size_t found = s.find(s1); // find substring s1 in string s;
    if (found != string::npos)

        return true;
    return false;
}

void inputString(string s[][2], int n)
{
    for (int i = 0; i < n; i++)
        for (int j = 0; j < 2; j++)
            cin >> s[i][j];
}

void checkingFuncion(string s, string s1) // check string s can change into string s1
{
    string temp1, temp2;
    removeLowercase(s, temp1);
    upcase(s, temp2);
    if ((check(s1, temp1)) == 0 && (check(s1, temp2)) == 0)
        cout << "NO" << endl;
    else if ((check(s1, temp1)) == 1 || (check(s1, temp2)) == 1)
        cout << "YES" << endl;
}

int main()
{
    int n;
    cin >> n;
    string s2;
    string s[n][2];
    inputString(s, n);
    for (int i = 0; i < n; i++)
        checkingFuncion(s[i][0], s[i][1]);
    return 0;
}
