/*
Binary Search
Rahul A B
S3 CSA
52
*/

#include<stdio.h>
#define Size 100

void main()
{
	int flag=0,FIRST,LAST,mid,Array[Size],maxSize,searchvalue,i;
	printf("Binary Search : \nEnter the size of array : ");
	scanf("%d",&maxSize);
	printf("!!!!! Element Should be ordered !!!!!\n");
	for(i=0;i<maxSize;i++)
	{
		printf("Enter Element : ");
		scanf("%d",&Array[i]);
	}
	FIRST=0;
	LAST=maxSize-1;
	printf("Enter the value to be searched : ");
	scanf("%d",&searchvalue);
	while (FIRST<=LAST)
	{
		mid=((FIRST+LAST)/2);
		if (Array[mid]==searchvalue)
		{
			printf("Element Found At %d\n",mid+1);
			flag=1;
			break;
		}	
		else 
		{
			if (Array[mid]<searchvalue)
			{
				FIRST=mid+1;
			}
			else
			{
				LAST=mid-1;
			}
		}
	}
	if (flag==0)
	{
		printf("Element doesn't exsist in the array\n");
	}
}
