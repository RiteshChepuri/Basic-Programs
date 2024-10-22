#include <stdio.h>
#include <string.h>

int Palindrome(char *s[]) {
  char n = 0;
  char z = strlen(s) - 1;

  while (z > n) {
    if (s[n++] != s[z--]) {
      printf("%s is not a palindrome.\n", s);
      return;
    }
  }
  printf("%s is a palindrome.\n", s);
}

int main() {
  char string;
  printf("enter string you want to check if its a aplindrome\n");
  scanf("%s", &string);
  Palindrome(string);
  return 0;
}
