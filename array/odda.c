#include<stdio.h>
int main(){

    int i,n,even=0,odd=0;

    printf("enter number of elements:");
    scanf("%d",&n);

    int arr[n];

    printf("enter elements;");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=0;i<n;i++)
    {
        
    if(arr[i]%2 == 0)
{
    even ++;
}
else{
    odd++;
}
    }
    printf("number of even elements = %d",even);
    printf("number of odd elements = %d",odd);
    

    return 0;
}