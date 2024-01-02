#include<iostream>
using namespace std;

int main() {
    int s,w,e;
    int i = 0;
    cin>>s>>e>>w;
   for (int fah = s;fah<=e;fah=fah+w){
    int cal = static_cast<int>((5.0/9.0)*(fah-32));
    cout<<fah<<"\t"<<cal<<endl;
   }

    return 0;
}