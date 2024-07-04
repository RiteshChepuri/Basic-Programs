#include <stdio.h>
#include <string.h>

void Palindrome(char s[]) {
  int n = 0;
  int z = strlen(s) - 1;

  while (z > n) {
    if (s[n++] != s[z--]) {
      printf("%s is not a palindrome.\n", s);
      return;
    }
  }
  printf("%s is a palindrome.\n", s);
}

int main() {
  Palindrome("abba");
  return 0;
}
