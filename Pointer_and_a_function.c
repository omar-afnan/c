/*
Write a function that takes an integer pointer as an argument
 and modifies the value of the integer. 
 In the main function, declare an integer variable, print its value
 , call the function with the address of the variable,
  and print the modified value.

*/

#include <stdio.h>
 void value(int * ptr)
 {
    *ptr=20;
 }
int main()
{
    int num=20;

     printf("the initial value of num is %d \n", num);
     value(&num);

     printf("the new value is of the num is %d ",num);

     return 0;
}
