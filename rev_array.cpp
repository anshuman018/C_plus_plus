#include<iostream>
using namespace std;

int main() {
    int n;
    int arr[1000];
    cin>>n;
    int i=0;
    for(i;i<n; i++){
        cin>>arr[i];
    }
    for(i= n-1;i>=0;i--){
        cout<<arr[i]<<" ";
    }


    return 0;
}