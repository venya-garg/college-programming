#include <stdio.h>
#include <string.h>

int main()
{
char greetings[50] = "Welcome";
int len = strlen(greetings);
int size = sizeof(greetings);
printf("length %d\n", len);
printf("Size %d\n", size);

return 0;
}
