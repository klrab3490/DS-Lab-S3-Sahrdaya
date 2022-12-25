/*
Bubble Sort
Name: Rahul A B 
Roll No: 52
*/

#include<stdio.h>
void main()
{
	int a=0,i=0,j=0,temp=0;
//array length	
	printf("Bubble Sort\n======================\nEnter The Length Of Array: ");
	scanf("%d",&a);
	int b[a];
//input array
	for(i=0;i<a;i++){
		printf("Enter The %dth element: ",i+1);
		scanf("%d",&b[i]);
	}
//Array Before Sorting
	printf("\nBefore Sorting Array Entered: \n======================\n");
	for(i=0;i<a;i++)
		printf("%d\t",b[i]);
//Bubble Sorting
	for(i=0;i<a;i++){
		for(j=0;j<a-i-1;j++){
			if (b[j]>b[j+1]){
				temp=b[j];
				b[j]=b[j+1];
				b[j+1]=temp;
			}
		}
	}
	printf("\n");
	printf("\nAfter Sorting Array Entered: \n======================\n");
	for(i=0;i<a;i++)
		printf("%d\t",b[i]);
	printf("\n");		
}