#include<iostream>
using namespace std;
void insertionsort(int arr[],int n){
    for(int i=1; i<n; i++){
        int current = arr[i];
        int j = i;
            while(j>0 && arr[j-1]>current){
                arr[j]=arr[j-1];
                j--;
            }
            arr[j]=current;
    }
}

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    insertionsort(arr,n);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}