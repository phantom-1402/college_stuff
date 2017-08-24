/* Income Tax Calculation */
#include <stdio.h>
int main()
{
        long s,t1,t2,t3,t4,tax; //Declaration
        printf ("\n Enter the Salary=");
        scanf ("%ld" ,&s);

        if (s>1000000)
         {
          tax=12500+100000+(s-1000000)*0.30;
         }

        else if (s>500000&&s<=1000000)
         {
          tax=12500+(s-500000)*0.20;
         }

        else if (s>250000&&s<=500000)
         {
          tax=(s-250000)*.05;
         }

        else
            tax=0;

printf ("Salary=%ld&Tax=%ld", s,tax);
return 0;
}

