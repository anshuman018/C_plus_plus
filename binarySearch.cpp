#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int binary_search(int arr[], int n, int target)
{
    int low = 0;
    int high = n - 1;
    int mid = 0;
    while (low <= high)
    {
        mid = low + (high - low) / 2;
        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid] < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int target;
    int n;
    cout << "How many numbers do you want to enter?" << endl;
    cin >> n;
    cout << "Enter " << n << " integers separated by spaces:" << endl;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the target value:" << endl;

    cin >> target;

    sort(arr, arr + n);
    
    int ans = binary_search(arr, n, target);
    if (ans != -1)
    {
        cout << "Target value found at index: " << ans << endl;
    }
    else
    {
        cout << "Target value not found in the array." << endl;
    }

    return 0;
}
