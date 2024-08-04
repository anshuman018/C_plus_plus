#include <iostream>
using namespace std;

void selectionsort(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        int min = arr[i];
        int minidx = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < min)
            {
                min = arr[j];
                minidx = j;
            }
        }
        // swap
        int temp = arr[i];
        arr[i] = arr[minidx];
        arr[minidx] = temp;
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

    for (int k = 0; k < n; k++)
    {
        cout << arr[k] << " ";
    }
    return 0;
}