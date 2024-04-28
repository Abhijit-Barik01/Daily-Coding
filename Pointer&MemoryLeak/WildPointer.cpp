#include <iostream>

int main() {
    int* ptr; // Declaring a pointer without initialization (wild pointer)

    *ptr = 10; // Dereferencing a wild pointer (undefined behavior) ilegal memory acess

    //this is called unintialized pointer. to solve thi swe use null pointer

    return 0;
}
