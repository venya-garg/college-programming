//Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.

#include <stdio.h>

int main()
{
int n, num = 1, den = 2;
float sum = 0;

printf("Enter the number of terms: ");
scanf("%d", &n);

for (int i = 1; i <= n; i++)
{
if (i == 1)
{
sum = sum + 1;
}
else
{
num = num + 2;
den = den + 2;
sum = sum + (float)num / den;
}
}

printf("Sum = %.2f\n", sum);

return 0;
}
