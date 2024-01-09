#include <iostream>
using namespace std;

int main()
{
    char curr;
    int d;
    cout << "R For Dollar to Rs and D for Rs to Dollar" << endl;
    cin >> curr;
    switch (curr)
    {
    case 'r':
        cout << "Enter value in ruppes :" << endl;
        
        cin >> d ;
        cout<<d/83.11<<" "<<"$" ;
        break;
       
        case 'd':
        cout << "Enter value in in dollar :" << endl;
        cin >> d ;
        cout<<d*83.11<<' '<<"Rs" ;
        break;

    }
    
    

    return 0;
}