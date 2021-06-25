#include<stdio.h>

int main()
{
    double celsius, farhenheit;

    printf("Enter the temperature in celsius: ");
    scanf("%lf", &celsius);

    farhenheit = 1.8 * celsius + 32;

    printf("Temperature in farhenheit is: %0.2lf\n", farhenheit);

    return 0;
}
