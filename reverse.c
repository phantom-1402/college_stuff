#include<stdio.h>
int main()
{
        int a;
        int r=0,d;
        printf("enter a number:");
        scanf("%d",&a);

        while(a!=0)
        {
                d=a%10;
                r=r*10+d;
                a=a/10;

        }

printf("%d",r);




}
