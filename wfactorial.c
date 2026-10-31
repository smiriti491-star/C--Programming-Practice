#include<stdio.h>
int main(){

    int n,i=1,fact=1;

    printf("enter n:");
    scanf("%d",&n);

    while(n>0)
while(i<=n)
    {
        fact = fact*i;
        printf("factorial of n is %d\n",fact);
        i++;
    }
    

    return 0;
}