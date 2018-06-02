#include <stdio.h>
#include <string.h>

int main()
{
  char lc[27] = "";
  char* uc = "abcdefghijklmnopqrstuvwxyz";
  int i;

  for (i = 97; i < 123; i++)
  {
    lc[i-97] = ("%c", i); 
  }


  if (strcmp(lc, uc) == 0)
    printf("the strings are identical\n");
  else
    printf("the strings are different\n");

  for (i = 97; i < 123; i++)
  {
    lc[i-97] = ("%c", i-32); 
  }

  if (strcmp(lc, uc) == 0)
    printf("the strings are identical\n");
  else
    printf("the strings are different\n");

  char b[53];
  strcpy(b, lc);
  strcat(b, uc);
  printf("%s + %s = %s\n", lc, uc, b);

}