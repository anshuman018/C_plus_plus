#include <iostream>
using namespace std;

int main() {
    char n;

    int alpha = 0, space = 0, number = 0;

    // Read characters until '$' is encountered
    while ((n = cin.get()) != '$') {
        int c = static_cast<int>(n);

        if (c >= 48 && c <= 57) {
            number++;
        } else if (c >= 97 && c <= 122) {
            alpha++;
        } else if (c == 32 || c == '\t' || c == '\n') {
            space++;
        }
    }

    cout << alpha << ' ' << number << ' ' << space << endl;

    return 0;
}
