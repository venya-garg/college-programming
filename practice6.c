//how to check if a number is even or odd using bitwise and

#include <stdio.h>

int main()
{
int n;

printf("Enter a number: ");
scanf("%d", &n);

if (n & 1)
printf("The number is Odd.\n");

else
printf("The number is Even.\n");

return 0;
}
