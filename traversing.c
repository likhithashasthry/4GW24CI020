//accessing every element in an array atleat once
#include<stdio.h>
int main()
{
    int a[50],i,n;
    printf("enter the number of elements:");
    scanf("%d",&n);
    printf("enter the elements into the array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }


}