#include<iostream>

using namespace std;

bool check(int n)
{
    int countPrime = 0;//khai bao biem sum
    for( int i=1; i<=n/2; i++)
        {
            if( n%i == 0 )
                countPrime ++;
        }
    if( countPrime != 2 )
        return false;
    else
        return true;
}
int main(){
    int n;
    cin>>n;
    if ( check(n) == 1 )
        cout<< "no" ;
    else
        cout<< "yes";
    return 0;
}
