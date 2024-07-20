/* counting the no. of vowels in a string*/
#include<stdio.h>
int main()
{
    char str[30]="MY NAME IS PRADEEP NATH ";
    int i=0, count=0;
    while(i<30)// on the basis of string length.
    {
        if (str[i]=='A'||str[i]=='a'||str[i]=='E'||str[i]=='e'||str[i]=='I'||str[i]=='i'||str[i]=='O'||str[i]=='o'||str[i]=='U'||str[i]=='u')
        {
            count++;
        }
        i++;
    }
    printf("\n The no. of vowels =%d",count);
    return 0;
}
