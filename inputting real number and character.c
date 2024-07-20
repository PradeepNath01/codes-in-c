/* inputting real number and a character */
#include<stdio.h>
int main()
{

    float a,b;
    double x,y;
    long double g,h;
    char ch;
    printf("enter value of a & b:");
    scanf("%f%e",&a,&b);
    printf("value of a=%f & value of b=%e",a,b);
    printf("\n enter the value of x,y,g,h");
    scanf("%lf%le%Lf%Lf",&x,&y,&g,&h);
    printf("The value of x=%lf , y=%le ,g=%Lf , h=%Lf\n ",x,y,g,h);
        getchar();
    printf("\n enter a character:");
    scanf("%c",&ch);
    printf("\n value of ch=%c",ch);
 return 0;
}
/*
#include <stdio.h>

int main() {
    float a, b;
    double x, y;
    long double g, h;
    char ch;

    printf("Enter value of a & b: ");
    scanf("%f %e", &a, &b);
    printf("Value of a = %f and value of b = %e\n", a, b);

    printf("Enter the value of x, y, g, h: ");
    scanf("%lf %le %Lf %Lf", &x, &y, &g, &h);
    printf("The value of x = %lf, y = %le, g = %Lf, h = %Lf\n", x, y, g, h);

    // To handle the newline character left in the input buffer from the previous scanf,
    // consume the newline using getchar() before reading a character
    getchar(); // Consumes newline left over

    printf("Enter a character: ");
    scanf("%c", &ch);
    printf("Value of ch = %c\n", ch);

    return 0;
}
*/
