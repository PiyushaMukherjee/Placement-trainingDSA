#include <iostream>

int* findLargest(int arr[], int size) {
    if (size == 0) return nullptr;
    int* largest = &arr[0];
    for (int i = 1; i < size; ++i) {
        if (arr[i] > *largest) {
            largest = &arr[i];
        }
    }
    return largest;
}

// Example usage
int main() {
    int arr[] = {5, 12, 3, 9, 21, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    int* largestPtr = findLargest(arr, size);
    if (largestPtr) {
        std::cout << "Largest element: " << *largestPtr << std::endl;
    } else {
        std::cout << "Array is empty." << std::endl;
    }
    return 0;
}