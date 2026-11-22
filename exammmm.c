#include<stdio.h>
int main(){

    int i,n,number;

    printf("enter n:");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
{
    number = i;
    printf("number=%d",number);
}


return 0;
}