#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int space = 1;
        while (space <= n - i)
        {
            cout << ' ';
            space = space + 1;
        }
        int j = 1;
        while (j <= i)
        {
            cout << "*";
            j++;
        }

        j = i-1;
         while(j>=1){
             cout<<"*";
             j=j-1;

         }
         

        cout << endl;
        i = i + 1;
    }

    return 0;
}