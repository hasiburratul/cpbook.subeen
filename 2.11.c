#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a, b, sum;

    scanf("%lf", &a);
    scanf("%lf", &b);

    sum = a + b;

    printf("Sum is: %0.2lf", sum);

    return 0;
}
