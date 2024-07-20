#include<stdio.h>
int main()
{

    char str[20];
    printf ("Enter University Name:\t");
    scanf("%s",str);
    // str=&str[0]
    //scanf("%[^\n]",str);
    // gets(str);
    // printf("%s",str);
    puts (str);//drives curser to next line
    return 0;
}
