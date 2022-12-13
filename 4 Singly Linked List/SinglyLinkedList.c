/*
Singly Linked List
Rahul A B
S3 CSA
52
*/

#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};

struct node *head =NULL;

void insertBegin()
{
	int item;
	struct node * new;
	printf("Choice Made Is Insertion Through The Begining\nEnter Data To Be Added : ");
	scanf("%d",&item);
	new = (struct node *) malloc (sizeof(struct node));
	new->data=item;
	new->next=NULL;
	if (head==NULL)
	{
		head=new;
	}
	else
	{
		new->next=head;
		head=new;
	}
}
void insertEnd()
{
	int item;
	struct node * new;
	struct node * temp;
	printf("Choice Made Is Insertion Through The End\nEnter Data To Be Added : ");
	scanf("%d",&item);
	new = (struct node *) malloc (sizeof(struct node));
	new->data=item;
	new->next=NULL;
	if (head==NULL)
	{
		head=new;
	}
	else
	{
		temp=head;
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		temp->next=new;
	}
}
void insertAfterX()
{
	int item,x;
	struct node * new;
	struct node * temp;
	printf("Choice Made Is Insertion Between Elements\nEnter Data To Be Added : ");
	scanf("%d",&item);
	printf("After which element ? : ");
	scanf("%d",&x);
	new = (struct node *) malloc (sizeof(struct node));
	new->data=item;
	new->next=NULL;
	if (head==NULL)
	{
		head=new;
	}
	else
	{
		temp=head;
		while(temp->data!=x)
		{
			temp=temp->next;
		}
		new->next=temp->next;
		temp->next=new;
	}
}
void deleteBegin()
{
	printf("Choice Made Is Deletion Through The Begining\n");
	if (head==NULL)
	{
		printf("Singly Linked List Empty\n");
	}
	else
	{
		head=head->next;
	}
}
void deleteEnd()
{
	printf("Choice Made Is Deletion Through The End\n");
	struct node * temp;
	struct node * prev;
	if (head==NULL)
	{
		printf("Singly Linked List Empty\n");
	}
	else
	{
		temp=head;
		while (temp->next!=NULL)
		{
			prev=temp;
			temp=temp->next;
		}
		prev->next=NULL;
	}
}
void deleteX()
{
	printf("Choice Made Is Deletion Between\n");
	struct node * temp;
	struct node * prev;
	if (head==NULL)
	{
		printf("Singly Linked List Empty\n");
	}
	else if (head->next==NULL)
	{
		head=NULL;
	}
	else
	{
		int x;
		printf("Value To Be Deleted : ");
		scanf("%d",&x);
		temp=head;
		while (temp->data!=x)
		{
			prev=temp;
			temp=temp->next;
		}
		prev->next=temp->next;
	}
}
void display()
{
	printf("Choice Made Is Display\n");
	struct node * temp;
	if (head==NULL)
	{
		printf("Singly Linked List Empty\n");
	}
	else
	{
		printf("Elements Present Are :\t");
		temp=head;
		while (temp->next!=NULL)
		{
			int data=(temp->data);
			printf("%d\t",data);
			temp=temp->next;
		}
		printf("%d\t\n",temp->data);
	} 
}

void main()
{
	int choice=0;
	do
	{
		printf("====================\nSingly Linked List : \n====================\n1.Insert Beginning\n2.Insert End\n3.Insert After Particular Element\n4.Delete Begining\n5.Delete End\n6.Delete Particular Element\n7.Display\n8.Exit\n\tEnter Choice : ");
		scanf("%d",&choice);
		switch (choice)
		{
			case 1:
				insertBegin();
				break;
			case 2:
				insertEnd();
				break;
			case 3:
				insertAfterX();
				break;
			case 4:
				deleteBegin();
				break;
			case 5:
				deleteEnd();
				break;
			case 6:
				deleteX();
				break;
			case 7:
				display();
				break;
			case 8:
				exit(0);
			default:
				printf("!!Invaild Choice Retry!!\n");
				break;
		}
	}while(1);	
}
