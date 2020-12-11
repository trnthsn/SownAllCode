#include <iostream>
#include <string>

using namespace std;

int main () {

   string s,t;
   int count;
   count = 0;
   cin >> s;
   cin >> t;
   int a[s.length()];

   for ( int i = 0; i < s.length() ; i++)
   {
       if ( s[i] == t[i])
       {
           a[i] = 1;
       }
       else
       {
           a[i] = 0;
       }
   }

    for ( int i = 0; i < s.length(); i++)
    {
        if ( a[i] == 1)
        {
            count++;
        }
    }

    cout << count;
   return 0;
}
