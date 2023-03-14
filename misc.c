#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>

int foo = 0;

void printIntegers(unsigned i0, unsigned i1)
{
    for (i0; i0 <= i1; i0++)
    {
        printf("%d ", i0);
    }
    printf("\n");
}

void printAlphabets()
{
    for (char a = 'a'; a <= 'z'; a++)
    {
        printf("%c", a);
    }
    printf("\n");
}

void max(float a, float b)
{
    if (a > b)
    {
        printf("%f \n", a);
    }
    else
    {
        printf("%f \n", b);
    }
}