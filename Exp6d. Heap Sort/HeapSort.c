/*
	DFS
	Rahul A B
	S3 CSA
	52
*/

#include<stdio.h>
#include<stdlib.h>
#define Size 100

int maxSize,Heap[Size],i,largest,left,right;

void readHeap()
{
	printf("Enter The Size Of List : ");
	scanf("%d",&maxSize);
	printf("Enter The List To Heapify : ");
	for (int i=0;i<maxSize;i++)
	{
		scanf("%d",&Heap[i]);
	}	
}

void heapify(int n,int i)
{
	largest = i;
	left = 2*i+1;
	right = 2*i+2;
	if (left<n && Heap[left]>Heap[largest])
	{
		largest = left;
	}
	if (right<n && Heap[right]>Heap[largest])
	{
		largest = right;
	}
	if (largest!=i)
	{
		int temp = Heap[i];
		Heap[i] = Heap[largest];
		Heap[largest] = temp;
		heapify(n,largest);
	}
}

int heapSort(int n)
{
	for (i=n/2-1;i>=0;i--)
	{
		heapify(n,i);
	}
	for (i=n-1;i>=0;i--)
	{
		int temp=Heap[0];
		Heap[0]=Heap[i];
		Heap[i]=temp;
		heapify(n,i);
	}
}

void main()
{
	readHeap();
	heapSort(maxSize);
	printf("Heap Sorting :\t");	
	for(int i=0;i<maxSize;i++)
	{
		printf("%d\t",Heap[i]);
	}
}
