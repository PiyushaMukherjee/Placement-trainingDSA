#include <iostream>
using namespace std;

int main() {
    int num = 42;
    int* ptr = &num;

    cout << "Value of num: " << num << endl;
    cout << "Address of num: " << &num << endl;
    cout << "Value using pointer: " << *ptr << endl;
    cout << "Address using pointer: " << ptr << endl;

    return 0;
}