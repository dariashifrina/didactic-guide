#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(){
  char bee[256] = "haystack";
  char poo[256] = "delicious";
  char ch = 'h';
  char a = 'a';
  //strchr finds first occurrence of given character in string and returns the remaining string after that point. if character isn't in string, returns null.
  printf("strchr 'h' on haystack: %s\n", strchr(bee, ch));
  printf("strchr 'a' on haystack: %s\n", strchr(bee, a));
  printf("strchr 'h' on delicious: %s\n", strchr(poo, ch));

  //strstr finds the first occurrence of given character(s) in string and returns the string including and remaining after after that point. if character isn't in string, returns null.
  printf("finding hay in haystack: %s\n", strstr(bee, "st"));
  printf("finding poo in haystack: %s\n", strstr(bee, "poo"));
  return 0;
}
