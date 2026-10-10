//Print initials of a name with the surname displayed in full.


#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    int i, start = 0, len;

    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);

    len = strlen(name);

    if (name[len - 1] == '\n') {
        name[len - 1] = '\0';
        len--;
    }

    for (i = 0; i < len; i++) {
        if (name[i] == ' ') {
            printf("%c. ", name[start]);
            start = i + 1;
        }
    }

    printf("%s\n", &name[start]);

    return 0;
}
