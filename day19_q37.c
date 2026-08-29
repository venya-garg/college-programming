//Write a program to find the LCM of two numbers.

#include <stdio.h>

int main()
{
int a, b, gcd, lcm, i;

printf("Enter a: ");
scanf("%d", &a);
printf("Enter b: ");
scanf("%d", &b);

for (i = 1; i <= a && i <= b; i++)
{
if (a % i == 0 && b % i == 0)
gcd = i;
}

lcm = (a * b) / gcd;

printf("LCM of %d and %d = %d\n", a, b, lcm);

return 0;
}
