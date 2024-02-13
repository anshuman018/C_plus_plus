#include <iostream>
using namespace std;

int main()
{
    string text;
    string pattern;
    getline(cin, text);
    getline(cin, pattern);
    int l = 0;
    int r = pattern.size() - 1;
    while (r < text.size())
    {
        bool flag = true;
        for (int i = 0; i < pattern.size(); i++)
        {
            if (pattern[i] != text[l + i])
            {
                flag = false;
                break;
            }
        }
        if (flag == true)
        {
            cout << l << " ";
        }
        l++;
        r++;
    }

    return 0;
}