#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = n; i >= 1; i--) {
        // Print numbers from 1 to i
        for (int j = 1; j <= i; j++) {
            cout << j;
        }

        // Print '*' for remaining columns
        for (int k = i; k < n; k++) {
            cout << "**";
        }

        // Print numbers in reverse order from i-1 to 1
        for (int m = i - 1; m >= 1; m--) {
            cout << m;
        }

        cout << "\n";
    }

    return 0;
}
