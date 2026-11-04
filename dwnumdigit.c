#include<stdio.h>
int main(){

    int i=0,n;

    printf("enter number:");
    scanf("%d",&n);

    do
    {
        n=n/10;
        i++;
    } 
    while (n>0);
    printf("number of digits=%d",i);
    
    return 0;
}