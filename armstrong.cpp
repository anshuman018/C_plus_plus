#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int count(string n)
{
    int i = 0;
    for (char c : n)
    {
        if (isdigit(c))
        {
            ++i;
        }
    }
    return i;
}

int main()
{
    int n, sum = 0;

    cin >> n;
    int m = n;
    string str = to_string(n);

    while (n > 0)
    {
        int digit = n % 10;
        sum += pow(digit, count(str));
        n = n / 10;
    }
    
    if (sum == m)
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }

    return 0;
}
