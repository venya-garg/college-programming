//Write a program to calculate simple and compound interest for given principal, rate, and time.

#include <stdio.h>
#include <math.h>

int main() {
int P,R,T;
printf("Enter principal: ");
scanf("%d", &P);
printf("Enter rate: ");
scanf("%d", &R);
printf("Enter time: ");
scanf("%d", &T);

int SI = P * R * T / 100;
printf("Simple Interest: %d\n", SI);

float CI = P * pow(1 + R / 100.0, T) - P;
printf("Compound Interest: %f\n", CI);

return 0;
}
