#include<iostream>
using namespace std;

int main() {
    int marks;
    cin>>marks;
   if (75 <= marks && marks <= 100) {
    cout << "Distinction" << endl;
} else if (50 <= marks && marks < 75) {
    cout << "Average" << endl;
} else {
    cout << "Below Average" << endl;
}
    return 0;
}