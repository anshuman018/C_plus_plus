#include<iostream>
using namespace std;

int main() {
    int num;
    bool isPrime = true;
    int i = 2;
    cin>>num;
    while(i<=num-1){
        if (num % i == 0){
            isPrime = false;
            break; 
        }
        i++;

    }
    if (isPrime == 0){
        cout<<"Not prime"<<endl;
    }else{
        cout<<"prime"<<endl;
    }
    return 0;
}