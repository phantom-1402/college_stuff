#include <stdio.h>

int main(){
int i,j,x;
printf("Enter Number : ");
scanf("%d", &i);
j = 1;
x = 1;
while(j<=i){
x = x*j;
j++;
}
printf("Factorial is : %d \n", x);
return 0;
}
