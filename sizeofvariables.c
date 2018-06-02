#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a = 545;
    float b = 5.45;
    double c = 545000;
    char d = 'd';
    short int e = 54;
    long int f = 545545;

    printf("int a value %d and size %d bytes.\n", a, sizeof(a));
    printf("float b value %f and size %d bytes.\n",b, sizeof(b));
    printf("double c value %lf and size %d bytes.\n", c, sizeof(c));
    printf("char d value %c and size %d bytes.\n", d, sizeof(d));
    printf("short int e value %d and size %lu bytes.\n", e, sizeof(e));
    printf("long int f value %ld and size %lu bytes.\n", f, sizeof(f));
}
