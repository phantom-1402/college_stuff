/* Pyramidal Representation using C Programme */
#include <stdio.h>
int main()
{
int rows,i,j,k;
printf ("Enter Number of Rows=");
scanf ("%d" ,&rows);
i=1;
while (i<=rows)
        {
         printf ("\n");
         j=1;
         while (j<=rows-i)
                {
                 printf (" ");
                        j++;
                }
        k=1;
        while (k<=(2*i-1))
                {
                 printf ("*");
                 k=k+1;
                }
        i=i+1;
        }
}