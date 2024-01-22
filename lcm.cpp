#include <iostream>
using namespace std;

int gcd(int a, int b) {
    int restult = min(a,b);
    while(restult>0){
        if(a%restult==0 && b%restult==0){
            break;
        }
        restult--;
    }
    return restult;
    }
  
int lcm(int a, int b) {
    int gcdAB = gcd(a, b);
    

    return (a * b ) / gcdAB;
}

int main() {
    int a, b;
    cin >> a >> b;

    int result = lcm(a, b);

    cout << "LCM of " << a << " and " << b << " is: " << result << endl;

    return 0;
}
