#include<stdio.h>
int main(){

    int n,i,n_;

    printf("enter n:");
    scanf("%d",&n);

    for(i=1;i<=10;i++)
    {
        n_=i*n;
        printf("n = %d\n",n_);
    }
    return 0;
}