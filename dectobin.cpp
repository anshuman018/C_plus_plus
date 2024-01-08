
#include <iostream>
using namespace std;
int main()
{
    long long int x, y;
    long long int div = 0;
    cin >> x;
    long long int rev_bin = 0;
    while (x > 0)
    {
        div = (div * 10) + (x % 2);
        x = x / 2;
    }

    while (div > 0)
    {
        rev_bin = (rev_bin * 10) + (div % 10);
        div = div / 10;
    }
    cout << rev_bin;
    return 0;
}