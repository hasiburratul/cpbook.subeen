#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y;
    x = 1;
    y = x;
    x = 2;

    printf("%d\n", y);
    printf("%d\n", x);

    return 0;
}
