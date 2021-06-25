#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, sum;

    scanf("%d", &n);

    sum = (n * (n + 1)) / 2;

    printf("Summation is %d\n", sum);
    
    return 0;
}
