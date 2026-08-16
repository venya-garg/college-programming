//Write a program to input time in seconds and convert it to hours:minutes:seconds format.

#include <stdio.h>

int main() {
int total_seconds;
printf("Enter time in seconds: ");
scanf("%d", &total_seconds);

int hours = total_seconds / 3600;
int remaining_seconds = total_seconds % 3600;
int minutes = remaining_seconds / 60;
int seconds = remaining_seconds % 60;

printf("%02d:%02d:%02d\n", hours, minutes, seconds);

return 0;
}
