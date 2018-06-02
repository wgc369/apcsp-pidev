#include <stdio.h>
#include <string.h>

struct Student {
  char fn[50];
  char ln[50];
  char a[10];
  char si[50];
};

void printStudent(struct Student* student)
{
  printf("the student is -\n");
  printf("  first name:%s\n", student->fn);
  printf("  last name:%s\n", student->ln);
  printf("  age:%s\n", student->a);
  printf("  student id:%s\n", student->si);
}

int main()
{
  struct Student arr[3];

  for (int i = 0; i < 3; i++)
  {
    printf("Enter Your First Name:\n");
    scanf("%s", arr[i].fn);
    printf("Enter Your Last Name:\n");
    scanf("%s", arr[i].ln);
    printf("Enter Your Age:\n");
    scanf("%s", arr[i].a);
    printf("Enter Your Student ID:\n");
    scanf("%s", arr[i].si);
  }
  for (int i = 0; i < 3; i++)
  {
    printStudent(&arr[i]);
  }
  return 0;
}