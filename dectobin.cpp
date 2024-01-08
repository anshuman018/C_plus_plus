#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    long div = 0, rev = 1;
    while (n > 0)
    {
        int last = n % 2;
        div += last * rev;
        rev = rev * 10;
        n = n / 2;
    }
    cout << div;
    return 0;
}