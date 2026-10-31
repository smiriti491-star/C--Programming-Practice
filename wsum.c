#include<stdio.h>
int main(){

    int n,sum=0,i=1;

    printf("enter n:");
    scanf("%d",&n);

    while(i<=n)
    {
sum = sum+i;

i++;
    }
    printf("sum of n numbers = %d\n",sum);

    return 0;
}