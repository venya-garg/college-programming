//Write a program to input two numbers and display their sum.

#include <stdio.h>

int main() {
int a,b;

printf("Enter value of a: ");
scanf("%d", &a);

printf("Enter value of b: ");
scanf("%d", &b);

int c = a + b;
printf("Sum of two number is: %d\n", c);
return 0;
}
