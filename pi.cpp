#include<iostream>
using namespace std;

int main() {
    int n;

    cin>>n;
    int arr[1000];
    
    for(int i = 0; i<n; i++){
       cin>>arr[i];       
    }
    for(int i = 0; i<=n; i++){
         
     if(arr[i-1]>arr[i]){
        cout<<"unsorted Array"<<endl;
        break;
     }else{
        cout<<"Sorted Array"<<endl;
        break;
     }
     

    }

    return 0;
}