//inserting elements at the specified position
#include<stdio.h>
int main(int argscount , int *args[])
{
    int sizeOfArray,NumberOfElements,i,position,value;
    printf("enter the size of array:");
    scanf("%d",&sizeOfArray);
    int array[sizeOfArray];
    printf("enter the number of elements:");
    scanf("%d",&NumberOfElements);
    printf("enter the elements into the array:");
    for(i=0;i<NumberOfElements;i++)
    {
        scanf("%d",&array[i]);

    }
    printf("enter the position:");
    scanf("%d",&position);
    printf("enter the value to be entered at that position:");
    scanf("%d",&value);
    if(position>NumberOfElements-1)
    {
        sizeOfArray=NumberOfElements+1;
        array[position-1]=value;

    }
    else{
    if((sizeOfArray-NumberOfElements) > 1)
    {
         sizeOfArray=sizeOfArray-NumberOfElements;
    }
    
    
    for(i=sizeOfArray+1;i>(position-1);i--)
    {
        array[i]=array[i-1];
    }
    array[position-1]=value;
}
    printf("array after insertion:");
    for(i=0;i<NumberOfElements+1;i++)
    {
        printf("%d ",array[i]);

    }

}