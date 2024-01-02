
#include <iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
  while (n!=6){
    int a,b;
    switch (n)
    {
    case 1:
      cin>>a>>b;
      cout<<a+b<<endl;
      break;

      case 2:
      cin>>a>>b;
      cout<<a-b<<endl;
      break;
    case 3:
      cin>>a>>b;
      cout<<a*b<<endl;
      break;  
     case 4:
                cin >> a >> b;
                if (b != 0) {
                    cout << a / b << endl;
                } else {
                   cout << "Cannot divide by zero" << endl;
                }
                break;
    
     case 5:
                cin >> a >> b;
                if (b != 0) {
                    cout << a % b << endl;
                } else {
                    cout << "Cannot calculate remainder when divisor is zero" << endl;
                }
                break;

    default:
    cout<<"invalid operation"<<endl;
      break;
    }
  cin>>n;
  }
return 0;
}