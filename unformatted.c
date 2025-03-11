#include <stdio.h>

int main() {
    char ch;
    char str[50];

    printf("Enter a character: ");
    ch = getchar();
    getchar(); // To consume the newline character left in the buffer
    putchar(ch);
    printf("\n");

    printf("Enter value of string:\n");
    fgets(str, sizeof(str), stdin);
    printf("You entered: ");
    puts(str);

    return 0;
}