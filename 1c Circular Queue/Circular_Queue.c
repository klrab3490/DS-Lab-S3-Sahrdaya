/*
Circular Queue
Rahul A B
S3 CSA
52
*/

#include<stdio.h>
#include<string.h>
#define Size 100 

int CircularQueue[Size];
int FRONT=-1,REAR=-1,item,maxSize,i=0;
//Fuctions
void enqueueCircularQueue();
void dequeueCircularQueue();
void displayCircularQueue();
//Main Fuction
void main()
{
	int choice=0;
	printf("Circular Queue \nEnter The Size Of Queue : ");
	scanf("%d",&maxSize);
	do
	{
		printf("\n========================= \n Circular Queue Operation Menu \n========================= \n1.Enqueue \n2.Dequeue \n3.Display \n4.Exit \n\tEnter Choice : ");
		scanf("%d",&choice);
		switch (choice)
		{
			case 1:
				enqueueCircularQueue();
				break;
			case 2:
				dequeueCircularQueue();
				break;
			case 3:
				displayCircularQueue();
				break;
			case 4:
				printf("Exiting  On Circular Queue\n");
				break;
			default:
				printf("!!Invaild Choice!!\n");
				break;
		}
	}while (choice!=4);
}

//Define the fuction
void enqueueCircularQueue()
{
	printf("Choice Made Is Enqueue On Circular Queue\n");
    if ((FRONT==0 && REAR==maxSize-1) || (FRONT==(REAR+1)%maxSize) || (REAR==FRONT-1))
    {
        printf("Circular Queue is full");
    }
    else
    {
        if (FRONT==-1 && REAR==-1)
        {
            FRONT=0;
            REAR=0;
        }
        else
        {
            REAR=(REAR+1)%maxSize;
        }
        printf("Value to be added to Circular Queue : ");
        scanf("%d",&item);
        CircularQueue[REAR]=item;
    }
}
void dequeueCircularQueue()
{
	printf("Choice Made Is Dequeue On Circular Queue\n");
    if (FRONT==-1 && REAR==-1)
    {
        printf("Circular Queue is empty");
    }
    else
    {
        item=CircularQueue[FRONT];
        printf("Element deleted is %d\n",item);
        if (FRONT==REAR)
        {
            FRONT=-1;
            REAR=-1;
        }
        else
        {
            FRONT=(FRONT+1)%maxSize;
        }        
    }
}
void displayCircularQueue()
{
	printf("Choice Made Is Display On Circular Queue\n");
	if(FRONT==-1 && REAR==-1)
	{
		printf("Queue is empty");
	}
	else
	{
		if (FRONT<=REAR)
		{
			for(i=FRONT;i<=REAR;i++)
			{
				printf("%d\t",CircularQueue[i]);
			}
		}
		else
		{
			for (int i = FRONT; i < maxSize; i++)
            {	
            	printf("%d\t", CircularQueue[i]);
            }
            for (int i = FRONT; i <= REAR; i++)
            {
            	printf("%d\t", CircularQueue[i]);
            }
		}
	}
}	
	
