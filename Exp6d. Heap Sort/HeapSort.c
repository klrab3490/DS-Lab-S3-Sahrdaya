/*
	HeapSort
	Rahul A B
	S3 CSA
	52
*/

#include<stdio.h>
#define Size 100
int maxSize,Heap[Size];
void heapify(int a,int i){
	int largest,left,right,temp;
	largest = i;
	left = 2*i+1;
	right = 2*i+2;
	if (left < a && Heap[left] > Heap[largest])
		largest = left;
	if (right < a && Heap[right] > Heap[largest])
		largest = right;
	if (largest != i){
		temp = Heap[i];
		Heap[i] = Heap[largest];
		Heap[largest] = temp;
		heapify(a,largest);
	}
}

int HeapSort(int n){
	int i,temp;
	for ( i = n/2-1 ; i >= 0 ; i-- )
		heapify(n,i);
	for ( i = n-1 ; i >= 0 ; i-- ){
		temp=Heap[0];
		Heap[0]=Heap[i];
		Heap[i]=temp;
		heapify(i,0);
	}
}

void main(){
	printf("Heap Sorting\nEnter The Size Of List : ");
	scanf("%d",&maxSize);
	printf("Enter The List To Heapify : ");
	for (int i=0;i<maxSize;i++)
		scanf("%d",&Heap[i]);
	printf("Array Stored :\t");	
	for(int i=0;i<maxSize;i++)
		printf("%d\t",Heap[i]);
	HeapSort(maxSize);
	printf("\nHeap Sorted Array :\t");	
	for(int i=0;i<maxSize;i++)
		printf("%d\t",Heap[i]);
}