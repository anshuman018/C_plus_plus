#include <iostream>
using namespace std;

int main()
{

    int num;
    cin >> num;
    int row = 1;
    while (row <= num)
    {
        int space = 1;

        while (space <= num - row)
        {
            cout << ' ';
            space = space + 1;
        }
        int col = 1;
        while (col <= row)
        {
            cout << col;
            col++;
        }

        cout << endl;

        row++;
    }
}
