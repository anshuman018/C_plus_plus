#include <iostream>
using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
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
