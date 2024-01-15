#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[100];
    int b = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {

        if (a[i] < b)
        {
            b = a[i];
        }
    }
    cout<< b;
    return 0;
}