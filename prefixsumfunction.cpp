void prefixSum(int arr[], int n, int output[]) {
  output[0] = arr[0];

  for (int i = 1; i < n; i++) {
    output[i] = output[i - 1] + arr[i];
  }
}
