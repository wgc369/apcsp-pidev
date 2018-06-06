#include <stdio.h>

void change(int i, char grade[], float gm[])
{
  switch(grade[i])
  {
  case 'A' :
    gm[i] = 4.0;
    break;
  case 'a' :
    gm[i] = 4.0;
    break;
  case 'B' :
    gm[i] = 3.0;
    break;
  case 'b' :
    gm[i] = 3.0;
    break;
  case 'C' :
    gm[i] = 2.0;
    break;
  case 'c' :
    gm[i] = 2.0;
    break;
  case 'D' :
    gm[i] = 1.0;
    break;
  case 'd' :
    gm[i] = 1.0;
    break;
  case 'F' :
    gm[i] = 0.0;
    break;
  case 'f' :
    gm[i] = 0.0;
    break;
  default :
    printf("Not a valid grade mark.\n" );
    break;
   }
}
int main()
{
  char grade[5];
  float gm[5];
  float gpa = 0;
  char c;
  int i;

  printf("THIS IS A UNWEIGHTED GPA CALCULATOR FOR YOUR CURRENT SCHOOL SEMESTER\n");

  for(i = 0; i < 4; i++)
  {
    printf("Enter your %dst period grade mark:\n", i+1);
    scanf("%c", &(grade[i]));
    getchar();  //shanchu (enter)
    change(i, &grade[0], &gm[0]);
  }

  gpa = ((gm[0] + gm[1] + gm[2] + gm[3])/4);
  printf("YOUR GPA IS: %f\n", gpa);
  if (gpa > 3.0)
  {
    printf("YOUR GPA IS ABOVE NATIONAL AVERAGE:))\n");
  }
  else if (gpa < 3.0)
  {
    printf("YOUR GPA IS BELOW NATIONAL AVERAGE:((\n");
  }
  else
  {
    printf("YOUR GPA IS EQUAL TO NATIONAL AVERAGE!\n");
  }
  printf("DO YOU WANT YOUR GPA AND GRADES TO BE RATED?(y/n)\n");
  scanf("%c", &c);
  if (c == 'y')
  { 
    void rate(gpa, &gm[0]);
  }
  else
  {
    return 0;
  }  
}