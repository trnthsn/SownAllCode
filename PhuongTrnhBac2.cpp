#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;



int main()
{
    int a ,b, c;
    double nghiem;
    double nghiemkep;
    cin >> a >> b >> c;
    double

        if ( a == 0 && b == 0 )
        {
            if ( c == 0)
            {
                cout << "phuong trinh co vo so nghiem";
            }
            else if ( c != 0)
            {
                cout << "phuong trinh vo nghiem";
            }
        }

        else if ( a == 0 && b != 0 )
            {
                nghiem = -double(C)/double b;
                cout << nghiem;
            }
        else if ( a != 0 && b == 0)
        {
            if ( c > 0 )
            {
                cout << "phuong trinh vo nghiem"
            }
            else if ( c < 0 )
            {
                nghiem = sqrt(-c);
                cout << "phuong trinh co 2 nghiem" << endl;
                cout << -nghiem << " " << nghiem;
            }
        }
        else if ( a != 0 && b != 0 )
        {
            if ( c == 0)
            {
                nghiem = -double(b)/double(a);
                if ( nghiem > 0)
                    cout << "phuong trinh co 2 nghiem " << "0" << " " << nghiem;
                else
                    cout << "phuong trinh co 2 nghiem " << nghiem << " " << "0";
            }

            else if ( c != 0)
            {
                double delta = b*b - 4*a*c;
                if ( delta = 0 )
                {
                    nghiem = -double(b)/ 2*double(a);
                    cout << "phuong trinh co 1 nghiem " << nghiem;
                }
                else if ( delta < 0 )
                {
                    cout << "phuong trinh vo nghiem";
                }
                else if ( delta > 0 )
                {
                    nghiemkep = -double(b)/2*double(a);
                    nghiem = (-double b + sqrt(delta))/2*double a;
                    if ( nghiem > (nghiemkep - nghiem) )
                    {

                    }
                }
            }
        }


return 0;
}

