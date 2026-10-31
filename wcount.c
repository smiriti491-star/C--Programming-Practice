#include<stdio.h>
int main(){

    int n,i=1,count=1;

    printf("enter n:");
    scanf("%d",&n);

    while(n>0)
    {
        n=n/10;

        count++;
    }
            printf("number of digits in n:%d\n",count);

    return 0;
}