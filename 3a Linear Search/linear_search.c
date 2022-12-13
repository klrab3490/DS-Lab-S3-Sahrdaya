#include<stdio.h>
void main()
{
	int a=0,i=0,searchvalue=0,flag=0;
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
//Display
	printf("Array  Entered : ");
	for(i=0;i<a;i++)
	{
		printf("%d\t",b[i]);
	}
//Linear Search
	printf("\nEnter The Search Value: ");
	scanf("%d",&searchvalue);
	for(i=0;i<a;i++)
	{
		if(b[i]==searchvalue)
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
