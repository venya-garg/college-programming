//Write a c program to check palindrome string using function.

#include <stdio.h>
#include <string.h>

void checkPalindrome(char str[]) {
int i, length, flag = 1;

length = strlen(str);

for (i = 0; i < length / 2; i++) {
if (str[i] != str[length - i - 1]) {
flag = 0;
break;
}
}

if (flag == 1)
printf("Palindrome string\n");
else
printf("Not a palindrome string\n");
}

int main()
{
char str[100];

printf("Enter a string: ");
scanf("%s", str);

checkPalindrome(str);

return 0;
}

