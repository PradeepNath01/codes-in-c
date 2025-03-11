#include <stdio.h>
int main()
{
int num ;
// prompt the user to enter a number
printf("Enter an integer: ");
scanf("%d", &num);
// if the number is even
if(num % 2 == 0)
printf("%d is even.", num);
// if the number is odd
else
printf("%d is odd.", num);
return 0;
}