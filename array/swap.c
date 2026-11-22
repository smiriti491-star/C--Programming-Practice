#include<stdio.h>
int main(){

    int n,i,temp,j;

    printf("enter the size:");
    scanf("%d",&n);

    int arr[n];

    printf("enter array elements:");

    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    
    }
    j=n-1;

    for(i=0;i<j;i++)
    {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j]=temp;

        j--;
    }
    printf("reversed array");
    for(i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    
    }

    return 0;
}