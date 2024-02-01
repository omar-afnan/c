#include <stdio.h>
#include <ctype.h>

int main()
{
    char unit;
    float temp;

    printf("Enter the temperature in C or F: ");
    scanf(" %c", &unit);
    unit = toupper(unit);

    if (unit == 'C') {
        printf("Please enter the temperature: ");
        scanf("%f", &temp);
        temp = (temp * 9 / 5) + 32;
        printf("Temperature in Fahrenheit: %.2f\n", temp);
    } else if (unit == 'F') {
        printf("Please enter the temperature: ");
        scanf("%f", &temp);
        temp = (temp - 32) * 5 / 9;
        printf("Temperature in Celsius: %.2f\n", temp);
    } else {
        printf("ONLY ENTER 'C' OR 'F' FOR TEMPERATURE UNIT\n");
    }

    return 0;
}
