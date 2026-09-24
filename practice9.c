//Write a program to multiply a 2*3 matrix with a 3*2 matrix using nested loops to produce a 2*2 result matrix.

#include <stdio.h>

int main() {
int A[2][3], B[3][2], C[2][2];
int i, j, k;

printf("Enter elements of 2*3 matrix:\n");
for(i = 0; i < 2; i++) {
for(j = 0; j < 3; j++) {
scanf("%d", &A[i][j]);
}
}

printf("Enter elements of 3*2 matrix:\n");
for(i = 0; i < 3; i++) {
for(j = 0; j < 2; j++) {
scanf("%d", &B[i][j]);
}
}

for(i = 0; i < 2; i++) {
for(j = 0; j < 2; j++) {
C[i][j] = 0;
}
}

for(i = 0; i < 2; i++) {
for(j = 0; j < 2; j++) {
for(k = 0; k < 3; k++) {
C[i][j] = C[i][j] + A[i][j] * B[i][j];
}
}
}

printf("Resultant 2*2 matrix:\n");
for(i = 0; i < 2; i++) {
for(j = 0; j < 2; j++) {
printf("%d ", C[i][j]);
}
printf("\n");
}

return 0;
}
