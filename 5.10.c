#include<stdio.h>

int main()
{
     int a, b, t, multiplication, gcd, lcm;

     scanf("%d %d", &a, &b);

     multiplication = a * b;

     if (a == 0) {
       gcd = a;
       lcm = a;
     }
     else if (b == 0) {
       gcd = b;
       lcm = b;
     }
     else {
       while (b != 0) {
         t = b;
         b = a % b;
         a = t;
       }
       gcd = a;
       lcm = multiplication / gcd;
     }

     printf("GCD is %d\n", gcd);
     printf("LCM is %d\n", lcm);

     return 0;
}
