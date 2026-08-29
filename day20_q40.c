//Write a program to find the 1’s complement of a binary number and print it.

#include <stdio.h>

int main()
{
long long binary, temp = 0;
int digit;

printf("Enter binary number: ");
scanf("%lld", &binary);

while (binary != 0)
{
digit = binary % 10;

if (digit == 0)
temp = temp * 10 + 1;
else
temp = temp * 10 + 0;

binary = binary / 10;
}

printf("1's Complement= ");

while (temp != 0)
{
printf("%d", (int) temp % 10);
temp = temp / 10;
}

return 0;
}
