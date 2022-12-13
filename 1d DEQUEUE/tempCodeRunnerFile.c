/*
DEQUEUE
Rahul A B
S3 CSA
52
*/

#include<stdio.h>
#include<string.h>
#define Size 100 
 
int DEQUEUE[Size];
int LEFT=-1,RIGHT=-1,item,maxSize;
//Function
void insertRight();
void insertLeft();
int deleteRight();
int deleteLeft();
void displayDEQUEUE();
//Main Part
void main()
{
	int choice=0;
	printf("DEQUEUE	\nEnter The Size Of Queue : ");
	scanf("%d",&maxSize);
	do
	{
		printf("\n=========================\nDEQUEUE Operation Menu\n=========================\n1.Insertion Through Right\n2.Insertion Through Left\n3.Deletion Through Right\n4.Deletion Through Left\n5.Display\n6.Exit\n\tEnter Choice : ");
		scanf("%d",&choice);
		switch (choice)
		{
			case 1:
				printf("Choice Made Is Right Insertion\n");
				insertRight();
				break;
			case 2:
				printf("Choice Made Is Left Insertion\n");
				insertLeft();
				break;
			case 3:
				printf("Choice Made Is Right Deletion\n");
				deleteRight();
				break;
			case 4:
				printf("Choice Made Is Left Deletion\n");
				deleteLeft();
				break;
			case 5:
				printf("Choice Made Is Display\n");
				displayDEQUEUE();
				break;
			case 6:
				printf("Exiting DEQUEUE\n");
				break;
			default:
				printf("!!Invaild Choice!!\n");
				break;
		}
	}while (choice!=6);
}


void insertRight()
{
	if ((LEFT==0 && RIGHT==maxSize-1) || (LEFT==RIGHT+1))
	{
		printf("DEQUEUE is full");
	}
	else 
	{
		if (LEFT==-1 && RIGHT==-1)
		{	
			LEFT=0;
			RIGHT=0;
		}
		else if (RIGHT==maxSize-1)
		{
			RIGHT=0;
		}
		else
		{
			RIGHT=RIGHT+1;
		}
		printf("Enter The Value : ");
		scanf("%d",&item);
		DEQUEUE[RIGHT]=item;
	}
}
void insertLeft()
{
	if ((LEFT==0 && RIGHT==maxSize-1) || (LEFT==RIGHT+1))
	{
		printf("DEQUEUE is full");
	}
	else 
	{
		if (LEFT==-1 && RIGHT==-1)
		{	
			LEFT=0;
			RIGHT=0;
		}
		else if (LEFT==0)
		{
			LEFT=maxSize-1;
		}
		else
		{
			LEFT=LEFT-1;
		}
		printf("Enter The Value : ");
		scanf("%d",&item);
		DEQUEUE[LEFT]=item;
	}
}
int deleteRight()
{
	if (LEFT==-1 && RIGHT==-1)
	{
		printf("DEQUEUE is empty");
	}
	else
	{
		item=DEQUEUE[RIGHT];
		printf("Delted Item is : %d",item);
		if (LEFT==RIGHT)
		{
			LEFT=-1;
			RIGHT=-1;
		}
		else if (RIGHT==0)
		{
			RIGHT=maxSize-1;
		}
		else
		{
			RIGHT=RIGHT-1;
		}
	}
}
int deleteLeft()
{
	if (LEFT==-1 && RIGHT==-1)
	{
		printf("DEQUEUE is empty");
	}
	else
	{
		item=DEQUEUE[LEFT];
		printf("Delted Item is : %d",item);
		if (LEFT==RIGHT)
		{
			LEFT=-1;
			RIGHT=-1;
		}
		else if (LEFT==maxSize-1)
		{
			LEFT=0;
		}
		else
		{
			LEFT=LEFT+1;
		}
	}
}
void displayDEQUEUE()
{
	if (LEFT==-1 && RIGHT==-1)
	{
		printf("DEQUEUE is empty");
	}
	else if (LEFT<=RIGHT)
	{
		for (int i = LEFT; i <= RIGHT; i++)
		{
			printf("%d\t",DEQUEUE[i]);
		}
	}
	else
	{
		for (int i = 0; i <= RIGHT; i++)
		{
			printf("%d\t",DEQUEUE[i]);
		}
		for (int i = LEFT; i < maxSize; i++)
		{
			printf("%d\t",DEQUEUE[i]);
		}
	}
}
