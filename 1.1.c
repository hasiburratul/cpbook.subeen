#include <stdio.h>
#include <stdlib.h>

int main()
{
      int n,divisor,remainder;

      printf("Enter the number : ");
      scanf("%d",&n);

      printf("Enter the divisor : ");
      scanf("%d",&divisor);

      for (;n >= divisor;) {
        n = n - divisor;
      }
      remainder = n;

      printf("The remainder is %d ",remainder);
      return 0;
}
