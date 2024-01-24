#include<iostream>
using namespace std;
int getInversions(int arr[], int n)
{
    int ans = 0;
    for(int i=0;i<n-1;i++){
        int minidx = i;
        for(int j = i+1;j<n;j++){
            if(arr[j]<arr[minidx]){
                minidx=j;
            }
       
        }
        ans+=(minidx-i);
        int temp = arr[i];
        arr[i]=arr[minidx];
        arr[minidx]=temp;
        
    }
    return ans; 
}
int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
	    cin>>arr[i];
    }
    int ans = getInversions(arr, n);
    cout << ans << endl;
    return 0;
}