#include <iostream>
using namespace std;

int main() {
    int num = 42;
    int *ptr = &num;
    int **dptr = &ptr;

    cout << "Value of num: " << **dptr << endl;

    return 0;
}