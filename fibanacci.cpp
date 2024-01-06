#include<iostream>
using namespace std;

int main() {
    int n,a,b,i,c;
    cin>>n;
    a = 0;
    b = 1;
    for (i=0;i<n-1;i++){
    c = a + b;
    a = b;
    b = c;
    }
    cout<<a;
    return 0;
}