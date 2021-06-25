#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2;

    printf("Please enter the first number: ");
    scanf("%d", &num1);
    printf("Please enter the second number: ");
    scanf("%d", &num2);

    printf("%d + %d = %d\n", num1, num2, num1 + num2);
    printf("%d - %d = %d\n", num1, num2, num1 - num2);
    printf("%d * %d = %d\n", num1, num2, num1 * num2);
    printf("%d / %d = %d\n", num1, num2, num1 / num2);
    
    return 0;
}
