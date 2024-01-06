#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    if (n > 1)
    {

        int i;
        for (i = 2; i <= n; i++)
        {
            bool isprime = true;
            for (int j = 2; j <= i - 1; j++)
            {
                if (i % j == 0)
                {
                    isprime = false;
                    break;
                }
            }
            if (isprime)
            {
                cout << i << endl;
            }
        }
    }
    return 0;
}