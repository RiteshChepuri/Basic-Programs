#include <stdio.h>

int main() {
  int n, rev = 0;

  printf("Enter a number to reverse\n");
  scanf("%d", &n);

  int r = 0;
  while (n != 0) {
    r = n % 10;
    rev = rev * 10 + r;
    n /= 10;
  }
  printf("Number after getting reversed is %d\n", rev);

  return 0;
}
