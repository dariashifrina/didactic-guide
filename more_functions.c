#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(){
  char bee[256] = "haystack";
  char poo[256] = "delicious";
  char ch = 'h';
  char a = 'a';
  printf("strchr 'h' on haystack: %s\n", strchr(bee, ch));
  printf("strchr 'a' on haystack: %s\n", strchr(bee, a));
  printf("strchr 'h' on delicious: %s\n", strchr(poo, ch));
  printf("finding hay in haystack: %s\n", strstr(bee, "hay"));
  printf("finding poo in haystack: %s\n", strstr(bee, "poo"));
  return 0;
}
