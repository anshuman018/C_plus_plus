#include<iostream>
using namespace std;

int main() {
    int input;
    cout<<"Enter any number :";
    cin>>input;
    cout<<endl;
    cout<<"All the prime number till"<<" "<< input <<" "<< "is :" ;
    
    int counter = 2;

    while (counter<=input){
        bool isprime = true;
        int i = 2;
        while(i <= counter-1){
            if (counter % i == 0){
                isprime = false;
            }
            i++;

        }
        
        if (isprime == 1) {
            cout <<counter<<" ";
        }
        counter++;
  
    }
    
    return 0;
}