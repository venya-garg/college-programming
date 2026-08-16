//Write a program to calculate the area and circumference of a circle given its radius.

#include <stdio.h>

int main() {
float pi = 3.14;
int r;
printf("Enter radius of circle: ");
scanf("%d", &r);

float area = pi * r * r;
float circumference = 2 * pi * r;

printf("The area of circle is: %f\n", area);
printf("The circumference of circle is: %f\n", circumference);

return 0;
}

