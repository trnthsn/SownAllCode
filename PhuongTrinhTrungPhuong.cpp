#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    double a, b, c;
    cin >> a >> b >> c;
    double delta;
    double nghiem1, nghiem2;

    if (a == 0 && b == 0)
    {
        if (c == 0)
        {
            cout << "phuong trinh co vo so nghiem";
        }
        if (c != 0)
        {
            cout << "phuong trinh vo nghiem";
        }
    }
    else if (a == 0 && b != 0)
    {
        if (c == 0)
        {
            nghiem1 = 0;
            cout << "phuong trinh co 1 nghiem " << endl;
            cout << fixed << showpoint << setprecision(5);
            cout << nghiem1;
        }
        if (c != 0)
        {
            if (c > 0)
            {
                cout << "phuong trinh vo nghiem";
            }
            else if (c < 0)
            {
                nghiem1 = sqrt((-c) / b);
                cout << "phuong trinh co 2 nghiem" << endl;
                cout << -nghiem1 << " " << nghiem1;
            }
        }
    }

    else if (a != 0 && b == 0)
    {
        if (c == 0)
        {
            nghiem1 = 0;
            cout << "phuong trinh co 1 nghiem" << endl;
            cout << fixed << showpoint << setprecision(5);
            cout << nghiem1;
        }
        if (c != 0)
        {
            if (c < 0)
            {
                nghiem1 = sqrt((-c) / a);
                cout << "phuong trnh co 2 nghiem" << endl;
                cout << fixed << showpoint << setprecision(5);
                cout << -nghiem1 << " " << nghiem1;
            }
            if (c > 0)
            {
                cout << "phuong trinh vo nghiem";
            }
        }
    }
    else if (a != 0 && b != 0)
    {
        if (c == 0)
        {
            if (b < 0)
            {
                nghiem1 = 0;
                nghiem2 = double(-b) / double(a);

                cout << "phuong trinh co 3 nghiem" << endl;
                cout << fixed << showpoint << setprecision(5);
                cout << -sqrt(nghiem2) << " " << nghiem1 << " " << sqrt(nghiem2);
            }
            if (b > 0)
            {
                nghiem1 = 0;
                cout << "phuong trinh co 1 nghiem" << endl;
                cout << fixed << showpoint << setprecision(5);
                cout << nghiem1 << endl;
            }
        }
        if (c != 0)
        {
            delta = b * b - 4 * a * c;
            if (delta < 0)
            {
                cout << "phuong trinh vo nghiem";
            }
            if (delta == 0)
            {
                if ((-b) / (2 * a) > 0)
                {
                    nghiem1 = sqrt((-b) / (2 * a));
                    cout << "phuong trinh co 2 nghiem" << endl;
                    cout << fixed << showpoint << setprecision(5);
                    cout << -nghiem1 << " " << nghiem1;
                }
                if ((-b) / (2 * a) < 0)
                {
                    cout << "phuong trinh vo nghiem";
                }
            }
            if (delta > 0)
            {
                nghiem1 = (-b - sqrt(delta)) / (2 * a);
                nghiem2 = (-b + sqrt(delta)) / (2 * a);
                if (nghiem1 > 0 && nghiem2 > 0)
                {
                    cout << "phuong trinh co 4 nghiem" << endl;
                    cout << fixed << showpoint << setprecision(5);
                    cout << -sqrt(nghiem2) << " " << -sqrt(nghiem1) << " " << sqrt(nghiem1) << " " << sqrt(nghiem2);
                }
                if (nghiem1 > 0 && nghiem2 < 0)
                {
                    cout << "phuong trinh co 2 nghiem" << endl;
                    cout << fixed << showpoint << setprecision(5);
                    cout << -sqrt(nghiem1) << " " << sqrt(nghiem1);
                }
                if (nghiem1 < 0 && nghiem2 > 0)
                {
                    cout << "phuong trinh co 2 nghiem" << endl;
                    cout << fixed << showpoint << setprecision(5);
                    cout << -sqrt(nghiem2) << " " << sqrt(nghiem2);
                }
                if (nghiem1 < 0 && nghiem2 < 0)
                {
                    cout << "phuong trinh vo nghiem";
                }
            }
        }
    }
    return 0;
}
