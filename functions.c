#include<stdio.h>

float areaOfCircle(float r)
{
  float a;
  a = (r*r)*3.14;
  return a;
}

int main()
{
  float r = 3.5;
  float a;
    for ( r = 3.5; r <= 12.5; r++)
    {
      a = areaOfCircle(r);
      printf("%f\n", a);
    }
}
