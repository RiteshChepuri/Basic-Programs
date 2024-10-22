#include<stdio.h>

int countOccurence(char str[],char ch){
  int count = 0;

  for( int i=0;str[i]!= '\0'; i++){
    if( str[i] ==ch){
      count ++;
    }
  }
  return count;
}

int main(){
  char str[100],ch;

  printf("Enter a string\n");
  scanf("%s", &str);

  printf("Enter a character to check in string\n");
  scanf(" %c", &ch);

  int count = countOccurence(str,ch);

  printf("no of time character has occured is %d",count);
}
