/*write a program to input a character using different unformatted input functions and display them using unfromatted output function */
#include<stdio.h>
int main(){
    char ch;
    printf("Enter a character: ");
    ch = getchar();
    printf("Character entered using getchar(): ");
    putchar(ch);
    printf("\n");
    printf("Enter a character: ");
    ch = getc(stdin);
    printf("Character entered using getc(stdin): ");
    putc(ch, stdout);
    printf("\n");
    printf("Enter a character: ");
    ch = getche();
    printf("\nCharacter entered using getche(): ");
    putch(ch);
    printf("\n");
    printf("Enter a character: ");
    ch = getch();
    printf("\nCharacter entered using getch(): ");
    putch(ch);
    printf("\n");
    return 0;
}