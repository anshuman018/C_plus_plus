#include <iostream>
using namespace std;

int main()
{

    int N;
    cin >> N;

    if (N == 1 || N == 2)
    {
        cout << "1";
    }
    else
    {

        int first_number = 1, second_number = 1, result;

        for (int i = 3; i <= N; ++i)
        {
            result = first_number + second_number;
            first_number = second_number;
            second_number = result;
        }

        cout << result;
    }

    return 0;
}
