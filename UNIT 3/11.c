#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char str[100];
    int i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';  // Remove newline

    // Convert to uppercase
    for (i = 0; i < strlen(str); i++) {
        str[i] = toupper(str[i]);
    }

    printf("String in uppercase: %s\n", str);

    return 0;
}
