#include<iostream>
#include<vector>
using namespace std;

void findunique(vector<int>&arr,int n){
    int ans = 0;
    for(int i=0;i<n;i++){
        ans = ans^arr[i];
    }
    cout<<ans;
}

int main() {
    int n;
    cin>>n;
    vector<int> input(n);
    for(int i=0;i<n;i++){
        cin>>input[i];
    }
    findunique(input,n);
    return 0;
}