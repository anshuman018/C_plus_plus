#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int d = 1;

    while (d <= 10) {
        //n = n * d;
        cout << n * d << endl;
        d = d + 1;
    }

    return 0;
}
