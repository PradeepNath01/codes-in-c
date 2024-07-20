#include<stdio.h>
int main()
{

    char name[15]={'R','A','M',' ','B','A','H','A','D','U','R','\0'};
    for (int i=0;name[i]!='\0';i++)
        printf("%c",name[i]);
        //printf character by character
        return 0;
}
