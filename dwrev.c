#include<stdio.h>
int main(){

int n,a,rev=0;

printf("enter n:");
scanf("%d",&n);

do
{
    a=n%10;
    rev=rev*10+a;
    n=n/10;
} 
while (n>0);
printf("revesed number=%d",rev);


return 0;
}
