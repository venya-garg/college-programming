//Write a program to swap two numbers without using a third variable.

#include <stdio.h>

int main() {
int a,b;
a = 10;
b = 20;

a = a + b;
b = a - b;
a = a - b;

printf("New value of a is: %d\n", a);
printf("New value of b is: %d\n", b);

return 0;
}
