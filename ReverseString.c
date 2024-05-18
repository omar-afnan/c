/*
Implement a function in C called reverseString that takes a string as input and reverses 
it in-place. Do not use any library functions for reversing strings.
*/
#include <stdio.h>

void reverseString(char *str);

int main() {
    char ch[100];

    printf("Enter the string: ");
    scanf("%s", ch);

    printf("The original string is %s \n", ch);

    reverseString(ch);

    printf("The reversed string is %s \n", ch);

    return 0;
}

void reverseString(char *str) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    for (int i = 0; i < length / 2; i++) {
        char temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }
}
