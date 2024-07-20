#include<stdio.h>
#include<math.h>
int main()
{
// wap to find the roots of quadratic eqn ax^2+bx+c=0. Take values of a,b,c from user & calculate all possible roots.(x=(-b+-sqrt(b^2-4ac))/2a).
    int a,b,c;
    float x1,x2,real,img,des;
    printf("enter value of a,b,c");
    scanf("%d%d%d",&a,&b,&c);
    des=b*b-4*a*c;
    if (des==0)
    {

        printf("roots are equal and real");
        x1=-b/(2*a);
        printf("\n roots x1=%f",x1);
    }
    else if(des>0)
    {
         printf("\n roots are real and distinct");
         x1=-b/(2*a)+sqrt(des)/2*a;
         x2=-b/(2*a)-sqrt(des)/2*a;
         printf("\n roots are x1=%f&x2=%f",x1,x2);
    }
    else
    {

        printf("\n roots are imaginary and distinct");
        real=-b/(2*a);
        img=sqrt(4*a*c-b*b)/(2*a);
        printf("\n root x1=%f+j%f",real, img);
        printf("\n root x2=%f-j%f",real, img);
    }
    return 0;
}
