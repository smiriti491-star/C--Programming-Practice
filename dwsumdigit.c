#include<stdio.h>
int main(){

    int n,a,sum=0;

    printf("enter n:");
    scanf("%d",&n);

    do
    {
        a=n%10;
                sum=sum+a;

        n=n/10;
    }
    while(n>0);
    printf("sum of digits=%d\n",sum);

    return 0;
}