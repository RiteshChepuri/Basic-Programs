#include <stdio.h>
#include <math.h>

int main()
{
  int num;
  int i;
  int check = 1;

  printf("Enter a number\n");
  scanf("%d", &num);

  for (int i = 2; i <= sqrt(num); i++) {
    if (num % i == 0) {
      check = 0;
      break;
    }
  }

  if (num <=1){
      check = 0;
  }

  if (check == 1) {
      printf("%d is a prime number", num);
  }
  else {
      printf("%d is not a prime number", num);
  }
  return 0;
}
