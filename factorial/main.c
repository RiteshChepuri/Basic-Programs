#include <stdio.h>

unsigned int factorial(unsigned int n) {
  if (n == 0) {
    return 1;
  }
  return n * factorial(n - 1);
}

int main() {
  int a = 5;
  printf("factorial of %d is %d", a, factorial(a));
  return 0;
}
