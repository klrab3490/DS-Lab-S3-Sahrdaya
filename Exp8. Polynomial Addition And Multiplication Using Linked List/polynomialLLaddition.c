/*
	Polynomial Addition & Multiplication Using LL
	Rahul A B
	S3 CSA
	52
*/

#include<stdio.h>
#include<stdlib.h>

struct term
{
	int coeff;
	int expo;
	struct term * next;
};

struct term * head=NULL;
struct term * result=NULL;

void insertionPolynomial(struct term ** poly)
{
	int coefficient,exponent;
	struct term * new,* head;
	head=*poly;
	printf("Enter Data To Be Added\nCofficient : ");
	scanf("%d",&coefficient);
	printf("Exponent : ");
	scanf("%d",&exponent);
	new = (struct term *) malloc (sizeof(struct term));
	new->coeff=coefficient;
	new->expo=exponent;
	new->next=NULL;
	if (head==NULL)
	{
		head=new;
	}
	else
	{
		struct term * temp;
		temp=head;
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		temp->next=new;
	}
	*poly=head;
}

void displayPolynomial(struct term * head)
{
	struct term * temp;
	printf("Elements Present Are :\t");
	temp=head;
	while (temp->next!=NULL)
	{
		int data1=(temp->coeff),data2=(temp->expo);
		printf("%dx^%d + ",data1,data2);
		temp=temp->next;
	}
	printf("%dx^%d\n",temp->coeff,temp->expo); 
}

void addPolynomial(struct term * ptrp,struct term * ptrq)
{
	struct term * new;
	new = (struct term *) malloc (sizeof(struct term));
	while( ptrp->next!=NULL && ptrq->next!=NULL )
	{
		if (ptrp->expo > ptrq->expo)
		{
			new->coeff=ptrp->coeff;
			new->expo=ptrp->expo;
			ptrp=ptrp->next;
		}
		else if (ptrp->expo < ptrq->expo)
		{
			new->coeff=ptrq->coeff;
			new->expo=ptrq->expo;
			ptrq=ptrq->next;
		}
		else
		{
			new->coeff=ptrp->coeff + ptrq->coeff;
			new->expo=ptrp->expo;
			ptrp=ptrp->next;
		}
		struct term * new1;
		new1 = (struct term *) malloc (sizeof(struct term));
		new1->next=NULL;	
		new->next=new1;
		new=new1;
	}
	while ((ptrp->next!=NULL) || (ptrq->next!=NULL))
	{
		if (ptrp->next!=NULL)
		{
			new->coeff=ptrp->coeff;
			new->expo=ptrp->expo;
			ptrp=ptrp->next;
		}
		else
		{
			new->coeff=ptrq->coeff;
			new->expo=ptrq->expo;
			ptrq=ptrq->next;
		}
		struct term * new1;
		new1 = (struct term *) malloc (sizeof(struct term));
		new1->next=NULL;	
		new->next=new1;
		new=new1;
	}
}

void main()
{
	struct term * head1=NULL;
	struct term * head2=NULL;
	int choice=1;
//Polynimal 1
	do
	{
		insertionPolynomial(&head1);
		printf("\nContinue?{If Yes Press 1}\n\tChoice : ");
		scanf("%d",&choice);
		if (choice!=1)
		{
			break;
		}
	} while (1);
	printf("Polynomial 1 ");
	displayPolynomial(head1);
//Polynomial 2
	printf("\n");
	do
	{
		insertionPolynomial(&head2);
		choice=1;
		printf("\nContinue?{If Yes Press 1}\n\tChoice : ");
		scanf("%d",&choice);
		if (choice!=1)
		{
			break;
		}
	} while (1);
	printf("\n");
//Display
	printf("Polynomials Are : \nPolynomial 1 ");
	displayPolynomial(head1);
	printf("Polynomial 2 ");
	displayPolynomial(head2);
//Addiition
	addPolynomial(head1,head2);
}