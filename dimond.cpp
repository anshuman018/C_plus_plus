#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int i = 1;

    // Print the pyramid
    while (i <= n)
    {
        int space = 1;
        while (space <= n - i)
        {
            cout << ' ';
            space++;
        }

        int stars = 1;
        while (stars <= 2 * i - 1)
        {
            cout << '*';
            stars++;
        }

        cout << endl;
        i++;
    }

    i = n - 1;
    while (i >= 1)
    {
        int space = 1;
        while (space <= n - i)
        {
            cout << ' ';
            space++;
        }

        int stars = 1;
        while (stars <= 2 * i - 1)
        {
            cout << '*';
            stars++;
        }

        cout << endl;
        i--;
    }

    return 0;
}
