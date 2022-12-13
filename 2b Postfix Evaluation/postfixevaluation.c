/*
Evalutaion
Rahul A B
S3 CSA
52
*/

#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
#include<stdlib.h>
#define maxSize 10

int top = -1,ptop =-1;
char pStack[maxSize], stack[maxSize];

void push(int item)
{
	top = top + 1;
	pStack[top] = item;
}

int pop()
{
	int a;
	a = pStack[top];
	top = top - 1;
	return a;
}

void display()
{
	printf("Result : %d\n",pStack[top]);
}

void main()
{
	int A, B, power;
	printf("Enter an expression : ");
	scanf("%s",stack);
	for(int i = 0; i<strlen(stack); i++)
	{
		if (isdigit(stack[i]))
		{
			push(stack[i] - 48);
		}
		else 
		{
			switch(stack[i])
			{
				case '+':
				{
					A = pop();
					B = pop();
					push(B+A);
					break;
				}
				case '-':
				{
					A = pop();
					B = pop();
					push(B-A);
					break;
				}
				case '*':
				{
					A = pop();
					B = pop();
					push(B*A);
					break;
				}
				case '/':
				{
					A = pop();
					B = pop();
					push(B/A);
					break;
				}
				case '^':
				{
					A = pop();
					B = pop();
					int x=pow(B,A);
					push(x);
					break;
				}
			}
		}
	}
	display();
}

