
void arrange(int arr[], int n) {
    int val = 1;
    int s = 0;
    int e = n - 1;

    while (s < e) {
        arr[s] = val;
        val++;
        s++;

        arr[e] = val;
        val++;
        e--;
    }


    if (s == e) {
        arr[s] = val;
    }
}