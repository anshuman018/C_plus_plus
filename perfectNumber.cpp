#include<iostream>
using namespace std;

int main() {
    int input, i = 1, sum = 0;
    cin >> input;

    do {
        if (input % i == 0) {
            sum = sum + i;
        }
        i++;
    } while (i <= input);

    if (sum - input == input) {
        cout << input << " is a perfect number" << endl;
    } else {
        cout << input << " is not a perfect number" << endl;
    }

    return 0;
}
