#include <iostream>
using namespace std;

void sum(int arr[], int n, int ans[]) {
    for (int i = 0; i < n / 2; i++) {
        ans[i] = arr[i] + arr[n - i - 1];  
    }
}
int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int ans[n / 2];
    sum(arr, n, ans);
    for (int i = 0; i < n / 2; i++) {
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
}