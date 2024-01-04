#include<iostream>
using namespace std;

int main() {
	int n,even=0,odd=0;
    cin>>n;
    while(n>0){
        int last = n%10;
        if (last%2==0){
            even = even+last;
        }else{
            odd = odd + last;
        }
        n = n/10;
    }
	cout<<even<<" "<<odd;
}
