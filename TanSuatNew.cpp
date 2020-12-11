#include <iostream>
using namespace std;

void initValuesForArray(int A_1[], int A_2[], int len)
{
    for (int i = 0; i < len; i++)
    {
        cin >> A_1[i];
        A_2[i] = -1;
    }
}

void countFrequencyOfValues(int A_1[], int A_2[], int len)
{
    for (int i = 0; i < len; i++)
    {
        int counter = 1;
        for (int j = i + 1; j < len; j++)
        { 
            if (A_1[i] == A_1[j])
            {
                counter++;
                A_2[j] = 0;
            }
        }
        if (A_2[i] != 0)
        {
            A_2[i] = counter;
        }
    }

    for (int i = 0; i < len; i++)
    {
        if (A_2[i] != 0)
        {
            cout << A_1[i] << " " << A_2[i] << endl;
        }
    }
}

int main()
{
    int len;
    cin >> len;
    int Array_1[len];
    int Array_2[len];
    initValuesForArray(Array_1, Array_2, len);
    countFrequencyOfValues(Array_1, Array_2, len);
    return 0;
}
