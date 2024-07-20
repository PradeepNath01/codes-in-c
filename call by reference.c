#include<stdio.h>
#include<conio.h>
void swap(int*,int*);
void main()
{
    int x=10,y=15;
    printf("value before swap x=%d and y=%d",x,y);
    swap(&x,&y);
    printf("\n After swap,x=%d and y=%d",x,y);
    getch();
}
void swap(int *a,int*b)
{
    int t;
    t=*a;
    *a=*b;
    *b=t;
}
