#include <stdio.h>
int main()
{
int num;
printf("ENTER A NUMBER ");
scanf("%d",&num);

fact(num);

return 0;
}

void fact(int n)
{
int i,f=1;

for(i=1;i<=n;i++)
{
f=f*i;
}

printf("FACTORIAL IS %d",f);
}
