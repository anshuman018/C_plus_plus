#include<iostream>
using namespace std;

int main() {
	int X,Y,Z;
	cin>>X>>Y>>Z;
    if((X+Y)>Z && (Y+Z)>X && (Z+X)>Y){
        if(X==Y && Y==Z){
            cout<<"Equilateral triangle"<<endl;
        }else if(X==Y || Y==Z || Z==X){
            cout<<"Isosceles Triangle"<<endl;
        }else if (X!=Y && Y!=Z && Z!=X){
            cout<<"Scalene Triangle"<<endl;

        }

	
}else{
    cout<<"Not a Triangle"<<endl;
}
return 0;
}