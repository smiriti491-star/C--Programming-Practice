#include<stdio.h>
int main(){

    int i,n,smallest;

    printf("enter number of elements:");
    scanf("%d",&n);

    int arr[n];

    printf("enter elements:");

    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    
    }
    smallest = arr[0];
    for(i=1;i<n;i++)
    {
    if(arr[i]<smallest)
    
        smallest = arr[i];
    }
    printf("smallest = %d",smallest);

    return 0;
}