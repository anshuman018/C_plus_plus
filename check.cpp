#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int m = n;
    int rev = 0;
    while (n > 0)
    {
        rev = (rev * 10) + (n % 10);

        n = n / 10;
    }
    if (rev == m)
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
    cout << endl;

    cout << rev;
    return 0;
}