#include <iostream>
using namespace std;

int main()
{
    int a, b, i;
    int sum = 0;
    int product = 1;
    cin >> a >> b;
    if (b == 1)
    {
        for (i = 1; i <= a; i++)
        {
            sum = sum + i;
        }
        cout << sum;
    }
    else if (b == 2)
    {
        for (i = 1; i <= a; i++)
        {
            product = product * i;
        }
        cout << product;
    }
    else
    {
        cout << "-1";
    }

    return 0;
}