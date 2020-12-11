#include <iostream>
#include <cmath>

using namespace std;

void decToBinary(int n)
{
    int countBit1 = 0;

    // array to store binary number
    int binaryNum[32];

    // counter for binary array
    int i = 0;
    while (n > 0)
    {

        // storing remainder in binary array
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }

    // printing binary array in reverse order
    for (int j = i - 1; j >= 0; j--)
        if (binaryNum[j] == 1)
            countBit1++;
    cout << countBit1;
}

int main()
{
    int decimalNumber;
    cin >> decimalNumber;
    decToBinary(decimalNumber);
    return 0;
}
