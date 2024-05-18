/*
Write a C function that takes an array of integers and its length as parameters. 
The function should find and print the maximum element in the array.

*/


#include <stdio.h>

void printMax(int *array , int size)
{
    if (size<=0)
    {
        printf("the array is empty");
        return ;
    }
    else{
        printf("the list is not empty");
    }


    int max=*array;

    for(int i=1; i<size; i++)
    {
        if(*(array + i)> max)
        {
            max = *(array +i);
        }
    }
    printf(" the max no of element in the array is %d\n ", max);
}
int main()
{
 int array []={ 1,2,3,4,5,6,7,8,9,10};
 int size=sizeof(array)/sizeof(array[0]);

 printMax(array, size);



 return 0;
}
