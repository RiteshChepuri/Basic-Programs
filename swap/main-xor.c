
#include <stdio.h>

int main() {
    int a = 5, b = 10;

    printf("Before swapping: a = %d, b = %d\n", a, b);

    // Swap using bitwise XOR
    a = a ^ b;  // a now holds the XOR of a and b
    b = a ^ b;  // b now becomes the original value of a
    a = a ^ b;  // a now becomes the original value of b

    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}
