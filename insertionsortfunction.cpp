void insertionSort(int arr[], int n) {
    if (n <= 1) {
        return;
    }

    insertionSort(arr, n - 1);

    int lastElement = arr[n - 1];
    int j = n - 2;

    while (j >= 0 && arr[j] > lastElement) {
        arr[j + 1] = arr[j];
        j--;
    }

    arr[j + 1] = lastElement;
}
