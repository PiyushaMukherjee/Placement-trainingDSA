#include <iostream>
using namespace std;

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 10, y = 20;
    cout << "Before swapping: x = " << x << ", y = " << y << endl;
    swap(&x, &y);
    cout << "After swapping: x = " << x << ", y = " << y << endl;
    return 0;
}

//Easy (5 Questions)
//1. Swap Two Numbers Using Pointers
//Write a program to swap two integers using pointers.
//2. Access Array Elements Using Pointers
//Create a program to print each element of an array using pointer arithmetic.
//3. Sum of Array Elements Using Pointers
//Write a program to calculate the sum of elements in an array using pointers.
//4. Print Address and Value of a Variable
//Write a program to print the address and value of a variable using a pointer.
//5. Pointer to Pointer (Double Pointer)
//Create a program that uses a pointer to a pointer to display a variable’s value.