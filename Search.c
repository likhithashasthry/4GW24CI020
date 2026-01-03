#include<stdio.h>
#define MAX 50
int array[MAX];
int numberOfElements;
int data;
int sortedArray[MAX];

void lSearch(int data)
{
    int found=0;
    for(int i=0;i<numberOfElements;i++)
    {
        if(array[i]==data)
        {
            printf("Data found at position :%d\n",i+1);
            found=1;
            break;
        }
    }

    if(found==0){
            printf("data not found\n");
        }
    
}
void sort()
{
    
    for(int i=0;i<numberOfElements;i++)
    {
        sortedArray[i]=array[i];
    }
    for(int i=0;i<numberOfElements;i++)
    {
        for(int j=i+1;j<numberOfElements;j++)
        {
            if(sortedArray[i]>sortedArray[j])
            {
                int temp;
                temp=sortedArray[i];
                sortedArray[i]=sortedArray[j];
                sortedArray[j]=temp;
            }
        }
    }
}
void binarySearch(int data)
{
     sort();
     int found=0;
     int high,low;
     low=0;
      high=numberOfElements-1;
     while(low<=high){
      
     int mid=(high+low)/2;
      if(sortedArray[mid]==data)
      {
         printf("Data found at position :%d\n",mid+1);
         found=1;
         break;
     }
     
     else if (data>sortedArray[mid])
     {
         low=mid+1;
     }
     else  
     {
        high=mid-1;
     }
    }

     if(found==0){
            printf("data not found\n");
        }
     

    
     
     
}
int main()
{
    int choice;
    printf("Enter number of elements:");
    scanf("%d",&numberOfElements);
    printf("enter the elements:");
    for(int i=0;i<numberOfElements;i++)
    {
        scanf("%d",&array[i]);
    }
    do
    {
        printf("1.linear search\n 2.Binary search\n 3.exit\n");
        printf("enter your choice:");
        scanf(" %d",&choice);
        switch(choice)
        {
            case 1:printf("enter the data to search:");
                   scanf("%d",&data);
                   lSearch(data);
                   break;
            case 2:printf("enter the data to search:");
                   scanf("%d",&data);
                   binarySearch(data);
                   break;
            case 3:printf("out of searching operation");
                   break;
            default:printf("invalid choice");
        }
    } while (choice!=3);
    
}
