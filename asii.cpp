
#include <iostream>
using namespace std;
int main() {
    int a;
    char b;
    cout<<"Enter the value:"<<endl;
    cin>>b;
    a = static_cast<int>(b);
    if (a>=65 && a<=91 ){
        cout<<"1"<<endl;
    } else if (a>=97 && a<=122){
        cout<<"0"<<endl;
    }else {
        cout<<"-1"<<endl;

    }

    return 0;
}