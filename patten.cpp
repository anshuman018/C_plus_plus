#include<iostream>
using namespace std;
 void printstar(int n){
    int k,i,j;
    for(int i=1;i<=n;i++){
        for(int j=0;j<=n-i;j++){
            cout<<" ";
        }
        for(int k = i; k > 0 ;k--){
            cout<<"#";
        }
        cout<<endl;
    }
}

int main() {
    // Your code here;
    int n=6;
    printstar(n);
    return 0;
}