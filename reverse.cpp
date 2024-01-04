#include<iostream>
using namespace std;

int main() {
	int reverse = 0;
	int input;
	cin>>input;
	while(input>0){
		reverse= (reverse*10)+input%10;
		input = input/10;
	}
	cout<<reverse<<endl;
}
