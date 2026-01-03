//deletion of the elements from the given position
#include<stdio.h>
#include<stdlib.h>
int main(int argscount , int *args[])
{
int numberOfElements,i,position,value;
printf("enter numberOfElements:");
scanf("%d",&numberOfElements);
int array[numberOfElements];
printf("enter the elements:");
for(i=0;i<numberOfElements;i++)
{
    scanf("%d",&array[i]);
}
printf("enter the position:");
scanf("%d",&position);
if(position>numberOfElements||position<1)
{
    printf("invalid position");
    exit(1);
}
if(position==numberOfElements)
{
    numberOfElements--;

}
else{
    for(i=position-1;i<numberOfElements;i++)
    {
        array[i]=array[i+1];

    }
    numberOfElements--;
}

printf("Array after deletion:");
for(i=0;i<numberOfElements;i++)
{
    printf("%d ",array[i]);
}
}
