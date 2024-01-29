#include <iostream>
using namespace std;
void mergesort(int arr1[], int arr2[], int ans[], int n, int m)
{
    int i = 0, j = 0, k = 0;
    while (i < n && j < m)
    {
        if (arr1[i] < arr2[j])
        {
            ans[k] = arr1[i];
            i++;
            k++;
        }
        else
        {
            ans[k] = arr2[j];
            j++;
            k++;
        }
    }

    while (i < n)
    {
        ans[k] = arr1[i];
        i++;
        k++;
    }

    while (j < m)
    {
        ans[k] = arr2[j];
        j++;
        k++;
    }
}

int main()
{

    int arr1[6]={2,5,6,8,10,12};
    int arr2[5]={1,3,4,7,9};
    int ans[11];
    int n=6,m=5;
    mergesort(arr1,arr2,ans,n,m);
    for(int i=0;i<11;i++){
        cout<<ans[i]<<" ";
    }

    return 0;
}