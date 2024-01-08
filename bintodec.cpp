#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int bin;
    int i = 0;
    int dec = 0;
    cin >> bin;
    while (bin > 0)
    {
        int digit;
        digit = bin % 10;
        dec += pow(2, i) * digit;

        bin = bin / 10;
        i++;
    }
    cout << dec << ' ';
    return 0;
}