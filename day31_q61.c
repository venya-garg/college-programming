//Search for an element in an array using linear search.

#include <stdio.h>

int main()
{
int a[100], n, i, search;

printf("Enter number of elements: ");
scanf("%d", &n);

printf("Enter array elements: ");
for (i = 0; i < n; i++) {
scanf("%d", &a[i]);
}

printf("Enter elements to search: ");
scanf("%d", &search);

for (i = 0; i < n; i++) {
if (a[i] == search) {
printf("Elements found at position %d\n", i + 1);
break;
}
}

if (i == n) {
printf("Element not found\n");
}

return 0;
}
