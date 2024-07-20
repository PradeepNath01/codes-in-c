/* Inputting integer */
#include<stdio.h>
#include<conio.h>
void main()
{
     int a,b;
    printf("enter an integer number:");
    scanf("%d",&a);
    printf("The stored value of a=%d",a);
    printf("\n enter another integer no:");
    scanf("%3d",&b);
    printf("The stored value of b=%d",b);
    getch();
}


           OR


#include<stdio.h>
#include<conio.h>
void main()
{

    int c,d;
    printf("enter two integer numbers:");
    scanf("%2d%6d",&c,&d);
    printf("\n the value of c:%d",c);
    printf("\n the value of d:%d",d);
    getch();
}
