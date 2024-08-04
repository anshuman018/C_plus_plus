#include <iostream>
using namespace std;
int binarysearch(int arr[], int n, int x)
{
    int start = 0;
    int end = n - 1;
    int mid = 0;
    while (start < end)
    {
        mid = start + (end - start) / 2;
        if (arr[mid] == x)
        {
            return mid;
        }
        else if (arr[mid] < x)
        {
            start = mid + 1;
        }
        else if (arr[mid] > x)
        {
            end = mid - 1;
        }
    }
}

int main()
{
    int n;

    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int target;
    cin >> target;
    int result = binarysearch(arr, n, target);
    cout << result;

    return 0;
}