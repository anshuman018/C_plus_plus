#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    cout << "Prime numbers up to " << n << ": ";

    for (int num = 2; num <= n; ++num) {
        bool isPrime = true;

        for (int i = 2; i * i <= num; ++i) {
            if (num % i == 0) {
                isPrime = false;
                break; // No need to check further if it's not prime
            }
        }

        if (isPrime) {
            cout << num << " ";
        }
    }

    cout << endl;

    return 0;
}
