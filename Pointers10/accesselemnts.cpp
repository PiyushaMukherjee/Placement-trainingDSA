//accessing elements in the array...

#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    int *ptr = arr; 

    for (int i = 0; i < n; ++i) {
        cout << "Element is : " << i << ": " << *(ptr + i) << endl;
    }

    return 0;
}