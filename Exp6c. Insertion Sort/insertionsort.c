/*
	Insertion Sort
	Rahul A B
	S3 CSA
	52
*/

#include<stdio.h>
#include<stdlib.h>

void insertionsort(int array[],int size);

void main()
{
	int a=0,i=0;
	printf("Insertion Sort\nEnter The Length of Array : ");
	scanf("%d",&a);
	int array[a];
	for (int i=0;i<a;i++)
	{
		printf("Enter Element %d : ",i);
		scanf("%d",&array[i]);
	}
	printf("\nArray Before Sorting :\t");
	for (int i=0;i<a;i++)
	{
		printf("%d\t",array[i]);
	}
	insertionsort(array,a);
}	

void insertionsort(int array[],int size)
{
	int i=0,j=0,key;
	for(int i=1;i<size;i++)
	{
		key = array[i];
		j=i-1;
		while (j>=0 && array[j]>key)
		{
			array[j+1] = array[j];
			j--;
		}
		array[j+1] = key;
	}
	printf("\nArray After Sorting :\t");
	for (int i=0;i<size;i++)
	{
		printf("%d\t",array[i]);
	}
}
