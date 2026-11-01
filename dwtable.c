#include<stdio.h>
int main(){

    int i=1,n,a;

    printf("enter n:");
    scanf("%d",&n);
 printf("table of %d =\n",n);
    do
    {
        a=n*i;
       
        printf("%d\n",a);
        i++;
    }
    while(i<=10);

    return 0;
}