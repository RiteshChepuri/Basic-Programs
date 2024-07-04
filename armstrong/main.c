#include <stdio.h>

int main() {
  int n;
  printf("Enter Number \n");
  scanf("%d", &n);

  int a = n;
  int sum = 0;

  while (n > 0) {
    int rem = n % 10;
    sum = sum + (rem * rem * rem);
    n = n / 10;
  }

  if (a == sum) {
    printf("%d is an Armstrong number\n", a);
  } else {
    printf("%d is not an Armstrong number\n", a);
  }
  return 0;
}
