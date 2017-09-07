#include<stdio.h>
int main()
{
int r,sum,d;
printf("enter the upper range\n");
scanf("%d",&r);
int l=1;
for(l=1;l<=r;l++)
        {
        int n=l;
        sum=0;
                while(n>0)
                {
                d=n%10;
                sum=sum+(d*d*d);
                n=n/10;
                }
                        if(sum==l)
                {
                        printf("the given number is armstrong\n");
                }
                        else
                        printf("the given no.is not armstrong\n");
        }
return 0;
}
