#include <iostream>
using namespace std;

int main()
{
    int num, i = 2;
    cin >> num;
    bool isPrime = true;
    while (i <= num - 1)
    {
        if (num % i == 0)
        {
            isPrime = false;
            break;
        }
        i++;
    }
    if (isPrime == 0)
    {
        while (i <= num / 2)
        {
            if (num % i == 0)
            {
                cout << i << " ";
                i = i + 1;
            }
            else
            {
                i = i + 1;
            }
        }
    }
    else
    {
        cout << "-1" << endl;
    }

    return 0;
}