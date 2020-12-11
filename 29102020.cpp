#include <iostream>
using namespace std;

/*void trave()
{
    int x,y;// bien toa do x y
    for (int i = 0; i < Q; i++)
        for ( int j = 0; i < 2; j++)
            {
                x = i;
                y= j;
            }
    cout << arr[x][y];
}*/

int main(){
    int m,n,Q;
    cin >> m >> n >> Q;

   int arr[m][n];
    for ( int i = 0; i < m; i++)
        for ( int j = 0; j < n;j++)
            cin >> arr[i][j];
    int arr2[Q][2];
        for ( int i = 0; i < Q; i++)
            for ( int j = 0; j <2; j++)
                cin >> arr2[i][j];
    int x,y;// bien toa do x y
    for (int i = 0; i < Q; i++)
        for ( int j = 0; i < 2; j++)
            {
                x = i;
                y= j;
            }
    cout << arr[x][y];

    return 0;
}


