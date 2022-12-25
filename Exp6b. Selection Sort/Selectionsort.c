/*
	Selection Sort
	Rahul A B
	S3 CSA
	52
*/

#include<stdio.h>
#include<stdlib.h>
#define size 100

int array[size],maxSize;

void readArray()
{
	int i;
	for (int i=0;i<maxSize;i++)
	{
		printf("Enter Element %d : ",i);
		scanf("%d",&array[i]);
	}
}
void displayArray()
{
	int i;
	for (int i=0;i<maxSize;i++)
		printf("%d\t",array[i]);
}
void selectionSort()
{
	int i,j,small,temp;
	for(int i=0;i<=maxSize;i++)
	{
		small=i;
		for (int j=i+1;j<maxSize;j++)
		{
			if (array[j]<array[small])
				small=j;
		}
		temp = array[i];
		array[i] = array[small];
		array[small] = temp;
	}
}

void main()
{
	maxSize = 0;
	printf("Selection Sorting \nEnter the Size of Array : ");
	scanf("%d",&maxSize);
	readArray();
	printf("\nArray Before Sorting :\t");
	displayArray();
	selectionSort();
	printf("\nArray After Sorting :\t");
	displayArray();
	printf("\n");
}
