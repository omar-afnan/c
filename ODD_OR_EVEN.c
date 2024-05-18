/*
Write a C program that checks 
whether a given number is even or odd
 and prints an appropriate message.
*/

#include <stdio.h>

int main()
{
    int num;
    printf("enter a number  ");
    scanf("%d",&num);

    if(num %2==0)
    {
        printf("the number is even %d \n",num);

    }
    else
    {
        printf("the number is odd %d \n ",num);
    }


    return 0;
}
