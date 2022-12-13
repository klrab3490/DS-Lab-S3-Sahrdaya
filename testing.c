/* Sreerag Sreekanth
   Rollno: 60
   DEqueue */
#include<stdio.h>
#include<stdlib.h>
#define maxSize 5
int queue[maxSize], LEFT = -1, RIGHT = -1, item;
void Insertright(int item)
{
	printf("enter the element:");
	scanf("%d",&item);
	if((LEFT ==0 && RIGHT==maxSize-1) || (LEFT == RIGHT+1))
	{
		printf("Queue is full");
	}
	else
	{ 
		if(LEFT==-1 && RIGHT ==-1){
			LEFT=0,RIGHT=0;
		}
		else if(RIGHT=maxSize-1)
		{
			RIGHT= 0;
		}
		else
		{
			RIGHT=RIGHT+1;
		}
		queue[RIGHT]=item;
		printf("Item entered is %d\n", queue[RIGHT]);
	}
}

void Insertleft(int item)
{
	printf("enter the element:");
	scanf("%d",&item);
	if((LEFT==0 && RIGHT==maxSize-1) || (LEFT==RIGHT+1))
	{
		printf("Queue is full");
	}
	else
	{ 
		if(LEFT==-1 && RIGHT==-1)
		{
			LEFT=0,RIGHT=0;
		}
		else if(LEFT==0)
		{
			LEFT=maxSize-1;
		}
		else
		{
			LEFT=LEFT-1;
		}
		queue[LEFT]=item;
		printf("Item entered is %d\n", queue[LEFT]);
	}
}

void Deleteright(){
	if(LEFT==-1 && RIGHT==-1){
		printf("Queue is empty");
	}
	else
	{
		item=queue[RIGHT];
		printf("Element deleted is %d\n", item);
		
		if(LEFT==RIGHT){
			LEFT=-1;
			RIGHT=-1;
		}else if(RIGHT==0)
		{
			RIGHT=maxSize-1;
		}else
		{
			RIGHT=RIGHT-1;
		}
	}
}

void Deleteleft()
{
	if(LEFT==-1 && RIGHT==-1){
		printf("Queue is empty");
	}
	else{
	item=queue[LEFT];
	printf("deleted element is %d\n", item);
	}
	if(LEFT==RIGHT){
		LEFT=-1;
		RIGHT=-1;
	}else if(LEFT==maxSize-1)
	{
		LEFT=0;
	}
	else
	{
		LEFT=LEFT+1;
	}
}

void Display(){
	if(LEFT==-1 && RIGHT==-1)
	{
		printf("Queue is empty");
	}
	else
	{ 
		if(LEFT<=RIGHT)
		{
			for(int i=LEFT;i<=RIGHT;i++)
			{
				printf("%d\t",queue[i]);
			}
		}
		else
		{
			for(int i=0;i<=RIGHT;i++)
				{
					printf("%d\t",queue[i]);
				}
			for(int i=LEFT;i<maxSize;i++)
				{
					printf("%d\t",queue[i]);
				}
		}
	}
}

void main()
{
	while(1)
	{
		int n;
		printf("\n 1.Insert through right \n 2.Insert through left \n 3.Delete through right\n 4.delete through left\n 5.Display\n 6.EXIT \n");
		printf("enter the choice: ");
		scanf("%d",&n);
		switch(n){
		case 1:Insertright(item);
			break;
		case 2: Insertleft(item);
			break;
		case 3: Deleteright();
			break;
		case 4: Deleteleft();
			break;
		case 5: Display();
			break;
		case 6: exit(0);
			break;
		default: printf("invalid choice\n");
			break;
		}
	}
}

