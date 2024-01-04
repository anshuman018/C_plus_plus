#include<iostream>
#include<cmath>
using namespace std;

int main() {
	
	int b_salary;
	char grade;
    double total_salary;
    cout<<"Enter your basic salary and grade :"<<" ";
	cin>>b_salary>>grade;
    double hra = (20*b_salary)/100.0;
    double da = (50*b_salary)/100.0;
	double pf = (11*b_salary)/100.0;
    if (grade=='A'){
        total_salary = b_salary + hra + da + 1700 - pf;
        cout<<round(total_salary);
        
    }else if (grade=='B'){
        total_salary = b_salary + hra + da + 1500 - pf;
        cout<<round(total_salary);
        
    }else{
        total_salary = b_salary + hra + da + 1300 - pf;
        cout<<round(total_salary);
        
    }
}
