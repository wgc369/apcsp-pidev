#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  srand(time(0));
  int a = rand() % 100;
  int b = rand() % 100;
  // if statement to test is a is equal to 0
  printf("%d  %d\n",a,b);

  if (a == 0 && b == 0)
  {
    printf("a is equal to 0 AND b is equal to 0\n");
  }
  else if (a == b)
  {
    printf("a is b\n");
  }
  else if (a > b)
  {
    printf("a is greater than b\n");
  }
  else if (a == 0 || b == 0)
  {
    printf("a is equal to 0 OR b is equal to 0\n");
  }
  else
  {
    printf("a is not b\n");
  }
}
