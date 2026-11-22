#include<stdio.h>
int main(){

    int n,i;

    printf("enter elements :");
    scanf("%d",&n);

        int arr[n];

    printf("enter elements");
    for(i=0;i<n;i++)
    {
scanf("%d",&arr[i]);
    }
    printf("array elements are:");
    for(i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }

    return 0;
}