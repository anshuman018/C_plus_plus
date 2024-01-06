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

    // Print the inverted pyramid
    i = n - 1; // reset i for the inverted pyramid
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
