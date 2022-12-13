/*
Stack Using Array
Rahul A B
S3 CSA
*/

#include<stdio.h>
#define maxSize 100

int stack[maxSize],top=-1,item,size,i=0;

void push();
void pop();
void display();

void main()
{
	int choice=0;
	printf("stack Using Array\n================\nEnter max size of the stack : ");
	scanf("%d",&size);
	do
	{
		printf("================\nStack Operations\n================\n\t1.Push\n\t2.Pop\n\t3.Display\n\t4.Exit\n\tEnter Choice : ");
		scanf("%d",&choice);
		switch (choice)
		{
			case 1:
				push();
				break;
			case 2:
				pop();
				break;
			case 3:
				display();
				break;
			case 4:
				choice=4;
				break;
			default:
				printf("Invalid Choice!!!\nChoices (1/2/3/4)");
		}
	}while (choice!=4);
}

void push()
{
	printf("Push Operation Has Been Selected\n================\n");
	if (top>=size-1)
	{
		printf("Stack Overflow\n");
	}
	else
	{
		printf("Value to be sored in Stack : ");
		scanf("%d",&item);
		stack[++top]=item;
		printf("Value Inserted\n");
	}
}
void pop()
{
	printf("Pop Operation Has Been Selected\n================\n");
	if (top==-1)
	{
		printf("Stack Underflow\n");
	}
	else
	{
		item=stack[top--];
		printf("Element deleted is : %d\n",item);
	}
}
void display()
{
	printf("Display Operation Has Been Selected\n================\n");
	if (top==-1)
	{
		printf("Stack Overflow\n");
	}
	else
	{
		printf("Elements in Stack : ");
		for (i=top;i>=0;i--)
		{
			item=stack[i];
			printf("%d\t",item);
		}
		printf("\n");
	}
}