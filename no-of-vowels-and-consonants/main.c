#include <stdio.h>
#include<ctype.h>

int isVowel(char ch){
  ch = tolower(ch);
  return (ch =='a' || ch == 'e'|| ch == 'i'|| ch == 'o'|| ch == 'u');
}

int main() {
  char str[100];
  int vowels = 0, consonants =0;

  printf("Enter a string");
  fgets(str, sizeof(str),stdin);

  for (int i=0;str[i] != '\0'; i++){
    if (isalpha(str[i])){
      if (isVowel(str[i])){
        vowels++;
      } else {
        consonants++;
      }
    }
  }
  printf("No of vowels %d\n", vowels);
  printf("No of consonants%d\n", consonants);
}
