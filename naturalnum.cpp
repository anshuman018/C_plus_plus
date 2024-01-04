#include<iostream>
using namespace std;

int main() {
    int input; 
    
    while(true) {
        cin >> input;

        if (input == 50) {
            
            break;
        } else if (input == 15) {
            continue;
        }
       cout<<input<<" ";

    }
    cout<<"50"<<endl;
    
    return 0;
}
