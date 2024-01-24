#include <iostream>
#include <climits>
using namespace std;

void selectionsort(int arr[], int n)
{
    for (int j = 0; j < n; j++)
    {
        int minindx = j;
        int min = arr[j];
        for (int i = j + 1; i < n; i++)
        {

            if (arr[i] < min)
            {
                min = arr[i];
                minindx = i;
            }
        }
        // swap
        int temp = arr[j];
        arr[j] = arr[minindx];
        arr[minindx] = temp;
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
    selectionsort(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}