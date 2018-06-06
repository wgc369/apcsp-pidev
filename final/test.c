#include <stdio.h>
#include <string.h>

struct rate
{
    char good[50];
    char aa[50];
    char ba[50];
    char GG[50];
};

void rate(float gpa, float gm[])
{
  struct rate rates;
  strcpy( rates.good, "Excellent FULL CREDITS");
  strcpy( rates.aa, "Above avergae GOOD, keep working hard"); 
  strcpy( rates.ba, "Below average but don't give up");
  strcpy( rates.GG, "GG");
  printf("GPA RATE:\n");
  if(gpa == 4.00)
  {
    printf("%c\n", rates.good);
  }
  else if(gpa >= 3.5)
  {
    printf("%c\n", rates.aa);
  }
  else if(gpa >= 3.0)
  {
    printf("%c\n", rates.ba);
  }
  else
  {
    printf("%c\n", rates.GG);
  }
  printf("GRADES RATE:\n);
  for (i=0; i<4; i++)
  {
    if(gm[i] == 4)
    {
      printf("Your %d period grade is excellent!\n", i+1);
    }
    else if
  }
}