
#include <iostream>
#include <iomanip>
#include <cmath>
#include <vector>
using namespace std;
int main ()
{
    int n;
    cin >> n ;
    long num[n];
    //khoi tao mang
    for (int i=0;i<n;i++)
    {
        cin >> num[i];
    }
    vector <int>  vt(n,0);
    //dem so phan tu bang chinh no trong mang
    for (int j=0;j<n;j++)
    {

          for (int i=0;i<n;i++)
          {

              if (num[j]==num[i])
              {
                  vt[i]++;
              }
          }


    }
    for (int i=0;i<n;i++)
    {
        if (vt[i]%2==1)
        {
            cout << num [i]<<endl;
        }
    }
    return 0;
}
