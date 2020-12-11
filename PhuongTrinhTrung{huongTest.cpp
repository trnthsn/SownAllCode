#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;
int main()
{
    double denta, x1, x2, nghiem1;
    int a, b, c;
    cin >> a >> b >> c;
    denta = (b * b - 4 * a * c);
    x1 = double(-b - sqrt(denta)) / (2 * a);
    x2 = double(-b + sqrt(denta)) / (2 * a);
    if (a == 0)
    {
        if (b == 0 && c == 0)
        {
            cout << "phuong trinh co vo so nghiem";
        }
        else if (b == 0 && c != 0)
        {
            cout << "phuong trinh vo nghiem";
        }
        else if (b != 0 && c != 0)
        {
            double nghiem1 = double(-c) / double(b);
            if (nghiem1 < 0)
            {
                cout << "phuong trinh vo nghiem";
            }
            else if (nghiem1 > 0)
            {
                cout << fixed << setprecision(5) << "phuong trinh co 2 nghiem " << endl;
                cout << -sqrt(nghiem1) << " " << sqrt(nghiem1);
            }
        }
        else if (b != 0 && c == 0)
        {
            double nghiem = 0;
            cout << "phuong trinh co 1 nghiem" << endl;
            cout << fixed << showpoint << setprecision(5);
            cout << nghiem;
        }
    }
    else
    {
        if (c == 0)
        {
            if (b != 0)
            {
                double nghiem3 = double(-b) / double(a);
                if (nghiem3 < 0)
                {
                    cout << "phuong trinh co 1 nghiem" << endl;
                    cout << "0.00000";
                }
                else if (nghiem3 > 0)
                {
                    cout << fixed << setprecision(5) << "phuong trinh co 3 nghiem " << endl;
                    cout << -sqrt(nghiem3) << " "
                         << "0.00000"
                         << " " << sqrt(nghiem3);
                }
            }
            if (b == 0)
            {
                double nghiem = 0;
                cout << "phuong trinh co 1 nghiem" << endl;
                cout << fixed << showpoint << setprecision(5);
                cout << nghiem;
            }
        }
        if (denta > 0)
        {
            if (x1 > 0 && x2 > 0)
            {
                cout << fixed << setprecision(5) << "phuong trinh co 4 nghiem " << endl;
                cout << -sqrt(x2) << " " << -sqrt(x1) << " " << sqrt(x1) << " " << sqrt(x2) << endl;
            }
            else if (x1 > 0 && x2 < 0)
            {
                cout << fixed << setprecision(5) << "phuong trinh co 2 nghiem " << endl;
                cout << -sqrt(x1) << " " << sqrt(x1) << endl;
            }
            else if (x1 < 0 && x2 > 0)
            {
                cout << fixed << setprecision(5) << "phuong trinh co 2 nghiem " << endl;
                cout << -sqrt(x2) << " " << sqrt(x2) << endl;
            }
            else if (x1 < 0 && x2 < 0)
            {
                cout << "phuong trinh vo nghiem";
            }
        }
        else if (denta == 0)
        {
            double nghiemkep = -b / (2 * a);
            if (nghiemkep < 0)
            {
                cout << "phuong trinh vo nghiem";
            }
            else if (nghiemkep > 0)
                cout << fixed << setprecision(5) << "phuong trinh co 2 nghiem " << endl;
            cout << -sqrt(nghiemkep) << " " << sqrt(nghiemkep);
        }
        else if (denta < 0)
        {
            cout << "phuong trinh vo nghiem";
        }
    }
    return 0;
}
