//Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

#include <stdio.h>

int main() {
int l,b;
printf("Enter length and breadth: ");
scanf("%d %d", &l, &b);

int area = l * b;
int perimeter = l + l + b + b;

printf("The area of rectangle is: %d\n", area);
printf("The perimeter of rectangle is: %d\n", perimeter);
return 0;
}
