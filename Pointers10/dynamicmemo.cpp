#include <iostream>
#include <cstdlib> // For malloc and free

int main() {
    int n;
    std::cout << "Enter the size of the array: ";
    std::cin >> n;

    // Allocate memory for n integers
    int* arr = (int*)malloc(n * sizeof(int));
    if (arr == nullptr) {
        std::cout << "Memory allocation failed!" << std::endl;
        return 1;
    }

    // Accept values
    std::cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];
    }

    // Print the array
    std::cout << "Array elements are: ";
    for (int i = 0; i < n; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    // Free allocated memory
    free(arr);

    return 0;
}