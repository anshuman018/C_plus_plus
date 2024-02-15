#include <iostream>
#include <vector>
#include <random>
#include <ctime>

void shuffle(std::vector<int>& arr) {
    std::srand(std::time(0));
    int n = arr.size();

    for (int i = n - 1; i > 0; --i) {
        int j = std::rand() % (i + 1);
        std::swap(arr[i], arr[j]);
    }
}

int main() {
    std::vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    for (int num : arr)
        std::cout << num << " ";
    std::cout << std::endl;

    shuffle(arr);

    for (int num : arr)
        std::cout << num << " ";
    std::cout << std::endl;

    return 0;
}
