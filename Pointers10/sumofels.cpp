#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int *arr = new int[n];
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; ++i) {
        cin >> *(arr + i);
    }

    int sum = 0;
    for (int i = 0; i < n; ++i) {
        sum =sum +  *(arr + i);
    }

    cout << "Sum of array elements: " << sum << endl;

    delete[] arr;
    return 0;
}