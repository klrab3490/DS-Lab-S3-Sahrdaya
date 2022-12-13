/*
Linear Search
Name: Rahul A B 
Roll No: 52
*/

#include<stdio.h>
void linearsearch(int array[],int size,int searchvalue)
{
	int flag=0;
	for(int i=0;i<size;i++)
	{
		if(array[i]==searchvalue)
		{
			flag=1;
			printf("Element Found At %dth position\n",i+1);
		}
	}
	if(flag==0)
	{
		printf("Element Not Found\n"); 
	}
}
void main()
{
	int a=0,i=0,searchvalue=0;
//array length	
	printf("Linear Search\n====================================\nEnter The Length Of Array: ");
	scanf("%d",&a);
	int b[a];
//input array
	for(i=0;i<a;i++)
	{
		printf("Enter The %dth element: ",i+1);
		scanf("%d",&b[i]);
	}
//Search Value
	printf("\nEnter The Search Value: ");
	scanf("%d",&searchvalue);
//Function call
	linearsearch(b,a,searchvalue);

}
