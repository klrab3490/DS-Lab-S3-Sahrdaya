/*
Queue
Rahul A B
S3 CSA
52
*/

#include<stdio.h>
#include<string.h>
#define Size 100 
 
int Queue[Size];
int FRONT=-1,REAR=-1,item,maxSize;
//Function
void enqueue();
int dequeue();
void displayQueue();
//Main Part
void main()
{
	int choice=0;
	printf("Queue\nEnter The Size Of Queue : ");
	scanf("%d",&maxSize);
	do
	{
		printf("\n=========================\nQueue operation Menu\n=========================\n1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\n\tEnter Choice : ");
		scanf("%d",&choice);
		switch (choice)
		{
			case 1:
				printf("Choice Made Is Enqueue\n");
				enqueue();
				break;
			case 2:
				printf("Choice Made Is Dequeue\n");
				dequeue();
				break;
			case 3:
				printf("Choice Made Is Display\n");
				displayQueue();
				break;
			case 4:
				printf("Exiting Queue\n");
				break;
			default:
				printf("!!Invaild Choice!!\n");
				break;
		}
	}while (choice!=4);
}

void enqueue()
{
	if (REAR==maxSize-1)
	{
		printf("Queue Is Full");
	}
	else
	{
		if (FRONT == -1 && REAR == -1)
		{
			FRONT=0;
			REAR=0;
		}
		else
		{
			REAR = REAR + 1; 
		}
		printf("Enter the element to insert : ");
		scanf("%d",&item);
		Queue[REAR]=item;
	}
}
 
int dequeue()
{
	if (FRONT == -1 && REAR == -1)
	{
		printf("Queue Is Empty");
	}
	else
	{
		item=Queue[FRONT];
		printf("Deleted Element : %d",item);
		if (FRONT == REAR)
		{
			FRONT = -1;
			REAR = -1;
		}
		else
		{
			FRONT = FRONT + 1; 
		}
	}
}

void displayQueue()
{
	int i=0;
	if (FRONT == -1 && REAR == -1)
	{
		printf("Queue Is Empty");
	}
	else
	{
		printf("Elements Are : ");
		for(i=0;i<=REAR;i++)
		{
			printf("%d \t",Queue[i]);
		}
	}	
}

