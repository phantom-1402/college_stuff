#include <stdio.h>

int main(){
int x,y,i;
printf("Number of rows : ");
scanf("%d", &x);
i = 1;
while(i<=x){
int a = 1;
int b = 1;
while(a <= x-i){
printf(" ");
a++;
}
while(b <= i){
printf("%d", b);
b++;
}
b--;
while(b>1){
b--;
printf("%d", b);
}

printf("\n");
i++;
}
return 0;
}
