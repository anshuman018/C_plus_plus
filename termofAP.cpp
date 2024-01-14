
#include <iostream>
using namespace std;
int main()
{
    int x, series = 0;
    cin >> x;
    int count = 1;
    int i = 0;
    while (i < x)
    {
        series = (3 * count) + 2;
        if (series % 4 != 0)
        {
            cout << series << ' ';
            i++;
        }
        count++;
    }

    return 0;
}