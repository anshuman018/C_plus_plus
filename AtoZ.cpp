#include<iostream>
using namespace std;

int main() {
    char alpha = 'A';
    int a = alpha;
    
    while(a>64 && a<91){
      cout<<alpha<<" ";
      alpha++;
      a++;  
        
    }
    return 0;
}