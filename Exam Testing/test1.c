#include<stdio.h>
#include<stdlib.h>

void main()
{
    int maxSize=0,flag=0;
    printf("Linear Search\nEnter the size of array : ");
    scanf("%d",&maxSize);
    int array[maxSize];
    for (int i = 0; i < maxSize ; i++)
    {
        printf("Element %d : ",i);
        scanf("%d",&array[i]);
    }
    int searchvalue=0;
    for (int i = 0; i < maxSize ; i++)
    {
        if (array[i]==searchvalue)
        {
            printf("Element Found at %d position",i+1);
            flag=1;
        }
    }  
    if (flag==0)
    {
        printf("Element Not Found In Array");
    }
    return 0;
}