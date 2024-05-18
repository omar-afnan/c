/*
Create a C program that uses escape sequences 
to display the following pattern:

*/
#include <stdio.h>

int main()
{

int i;
int j;

for (int i=0; i<5; i++)
{
    for (int j=0; j<5; j++)
    {
        printf("*");
    }
    putchar('\n');
}

    return 0;
}
