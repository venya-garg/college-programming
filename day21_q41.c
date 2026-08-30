//Write a program to swap the first and last digit of a number.

#include <stdio.h>

int main()
{
int num, first, last, digits, power = 1, middle, result;

printf("Enter a number: ");
scanf("%d", &num);

last = num % 10;

int temp = num;
while (temp >= 10)
{
temp = temp / 10;
power = power * 10;
}

first = temp;

middle = (num % power) / 10;

result = last * power + middle * 10 + first;

printf("Number after swapping first and last digit = %d\n", result);

return 0;
}
