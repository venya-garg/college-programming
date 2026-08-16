#include <stdio.h>

int main() {
int n;
printf("Number of first n natural numbers: ");
scanf("%d", &n);

int sum = n * (n + 1) / 2;
printf("Sum of first n natural numbers is: %d\n", sum);

return 0;
}
