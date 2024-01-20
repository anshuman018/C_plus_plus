#include<iostream>
using namespace std;
int calculation(int x,int y,int n){
    int op = 0;
    op = (x*n)+(y*n);
    return op;
}

int main() {
    int x , y , n;
    cin>>x>>y>>n;
    if(n%2==0){
        n = n/2;
        cout<<calculation(x,y,n);
    }else{
        cout<<(x*((n/2)+1))+(y*(n/2));
    }
    
    return 0;
}