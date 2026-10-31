#include<stdio.h>
int main(){

    int sum=0,n,a;

    printf("enter n:");
    scanf("%d",&n);

    while(n>0)
    {
        a=n%10;
        n=n/10;
        sum=sum+a;

    }
    printf("sum of digits=%d\n",sum);

    return 0;
}