//Write a program to input two numbers and display their sum, difference, product, and quotient.

#include <stdio.h>

int main() {
int a,b;
printf("Enter value of a: ");
scanf("%d", &a);
printf("Enter value of b: ");
scanf("%d", &b);

int sum = a + b;
int difference = a - b;
int product = a * b;
int quotient = a / b;

printf("the sum of two numbers is: %d\n", sum);
printf("the difference of two numbers is: %d\n", difference);
printf("the product of two number is: %d\n", product);
printf("the quotient of two numbers is: %d\n", quotient);

return 0;
}

