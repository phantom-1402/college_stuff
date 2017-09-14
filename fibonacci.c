#include<stdio.h>
int fib(int a)
{
        long int i=0,t=0,t1=1,sum=0;
        printf("%ld",t1);

        while(i<=a)
        {
                sum=t+t1;
                printf(",%ld",sum);
                t=t1;
                t1=sum;
                i++;
        }

        return 0;
}
int main()
{
        int a;
        printf("Enter the Terms");
        scanf("%d:",&a);
        fib(a);
        return 0;
}
