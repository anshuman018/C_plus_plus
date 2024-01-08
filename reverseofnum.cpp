#include <iostream>
using namespace std;

int main()
{
    int input;
    cin >> input;
    int rev = 0;
    while (input > 0)
    {

        rev = (rev * 10) + (input % 10);
        input = input / 10;
    }
    cout << rev << ' ';
    return 0;
}