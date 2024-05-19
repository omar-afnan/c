/*
Write a program that demonstrates pointer arithmetic by creating an
 integer array and using a pointer to traverse and print all 
 elements of the array.

*/


#include <stdio.h>

int main()
{

 int array[]={100,200,300,400,500,690,700,800,900};

  int *ptr = array;
  int size= sizeof(array)/sizeof(array[0]);

  for(int a=0; a<size; a++)
  {
    printf(" the element are in the ordered size %d:  %d\n", a , *(ptr +a));
  }






    return 0;
}
