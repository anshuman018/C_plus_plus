#include<iostream>
using namespace std;

int main() {
    int arr[4] = {2,7,11,15};
    int target = 17;
    for(int i = 0;i<4;i++){
        for(int j = 0; j<4; j++){
           if(arr[j]-target==arr[i]){
            cout<<j<<i<<endl;
           } 
        }
    }
    return 0;
}