#include<stdio.h>
#include<conio.h>
 /*int a,b,c=20;
char ch; void sum();
void main()
{
    int d;
    printf ("enter a number:");
    scanf("%d",&b);
    a=b+c;
    printf("\n sum=%d",a);
    d=sum(b);
    getch();

}
int sum(k)
{
    int k;
    k=t+c
    return(k);
} */


int sum(int k, int c);

int main() {
    int b, a, d;
    int c = 20;

    printf("Enter a number: ");
    scanf("%d", &b);

    a = b + c;
    printf("\nSum = %d\n", a);

    d = sum(b, c);
    printf("Sum using function sum() = %d\n", d);

    return 0;
}

int sum(int k, int c) {
    return k + c;
}

