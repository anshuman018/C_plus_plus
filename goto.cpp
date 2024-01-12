#include <iostream>
using namespace std;

int main()
{

    string stu[100] = {"Anshu", "Khushi", "jiya", "Aryan", "khushi Pagaliya"};

    for (int i = 0; i <= 6; i++)
    {
        cout << stu[i] << " ";
    }
    cout<<endl;
    int n;
    cin >> n;
    cout << stu[n];

    return 0;
}