//Write a program to convert temperature from Celsius to Fahrenheit.

#include <stdio.h>

int main() {
float C;
printf("Enter the value of temp. in Celsius: ");
scanf("%f", &C);

float F = C * 1.8 + 32;
printf("The value of temp. in Fehrenheit is: %f\n", F);
return 0;
}
