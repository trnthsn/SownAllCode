#include <iostream>
using namespace std;
int main()
{
    string n;
    cin >>n;
    cout << n[0];
//    if (n[0] == "-")
        cout << n.size() - 1;
    cout << n.size();
    return 0;
}
