#include<iostream>
using namespace std;


int main(){

    long long int r,c;
    cin>>r>>c;
   long long int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>arr[i][j];
        }
    }
    for(int j=0;j<c;j++){
       long long int sum =0;
        for(int i=0;i<r;i++){
            sum+=arr[i][j];
        }
        cout<<sum<<" ";
    }


  
}


