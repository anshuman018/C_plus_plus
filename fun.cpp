#include <iostream>
using namespace std;
int fabonacci(int n)
{
    int a = 0, b = 1, c;
    for (int i = 1; i <= n; i++)
    {
        c = a + b;
        a = b;
        b = c;
        
    }
    return a;
}

int main()
{
    int n;
    cin >> n;
    if (n == 0)
    {
        cout << "1"
             << " ";
    }
    else
    {
        for(int i = 0;i<=n;i++){
        int o = fabonacci(i);
        cout<< o <<" ";
        }
    }

    return 0;
}