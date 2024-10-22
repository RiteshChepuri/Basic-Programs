#include<stdio.h>
#include<string.h>
#include<stdbool.h>

void sortString(char str[]){
  int n = strlen(str);
  char temp;

  for( int i=0;i<n-1;i++){
    for(int j=i+1;j<n;j++){
      if (str[i]> str[j]){
        temp =str[i];
        str[i] = str[j];
        str[j] = temp;
      }
    }
  }
}

bool areAnagrams(char str1[], char str2[]){
  if (strlen(str1) != strlen(str2)){
    return false;
  }

  sortString(str1);
  sortString(str2);

  for(int i=0;i<strlen(str1);i++){
    if( str1[i]!= str2[i]){
      return false;
    }
  }
   return true;
}

int main(){
  char str1[100], str2[100];

  printf("Enter first string\n");
  scanf("%s",str1);
  printf("Enter second string\n");
  scanf("%s",str2);

  if (areAnagrams(str1,str2)){
    printf("anagrams");
  } else {
    printf("not \n");
  }
}
