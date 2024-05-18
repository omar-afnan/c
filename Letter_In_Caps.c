/*
Write a C program to count the number of uppercase and lowercase letters in a given string.
 Assume the string contains only alphabetic characters.

*/

#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    int upperCaseCount = 0, lowerCaseCount = 0;
    int i;

    printf("Enter the string: ");
    scanf("%s", s);

    for (i = 0; s[i] != '\0'; i++) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            lowerCaseCount++;
        } else if (s[i] >= 'A' && s[i] <= 'Z') {
            upperCaseCount++;
        }
    }

    printf("Uppercase letter count: %d\n", upperCaseCount);
    printf("Lowercase letter count: %d\n", lowerCaseCount);

    return 0;
}
