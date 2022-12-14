/*
	BFS
	Rahul A B
	S3 CSA
	52
*/

#include<stdio.h>
#include<stdlib.h>
#define size 100

int matrix[size][size],maxSize,i,j,visited[size],FRONT=-1,REAR=-1,Queue[size],item;
void enqueue();
int dequeue();
void readMatrix()
{
	printf("Adjustancy Matrix\nEnter the number of vertices : ");
	scanf("%d",&maxSize);
	printf("Enter Matrix Values\n");
	for(int i=0;i<maxSize;i++)
	{
		for(int j=0;j<maxSize;j++)
		{
			scanf("%d",&matrix[i][j]);
		}
	}	
}

void BFS(int v)
{
	int i=0;
	printf("BFS Result :\t%d",v);
	visited[v]=1;
	enqueue(v);
	while(FRONT!=-1)
	{
		v=dequeue();
		for (int i=1;i<=maxSize;i++)
		{
			if (matrix[v][i] && !visited[i])
			{
				visited[i]=1;
				enqueue(i);
				printf("\t%d",i);
			}		
		}
	}
	
}

void main()
{
	readMatrix();
	BFS(0);
	printf("\n");
}

void enqueue(int item)
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
	Queue[REAR]=item;
}
 
int dequeue()
{
	item=Queue[FRONT];
	if (FRONT == REAR)
	{
		FRONT = -1;
		REAR = -1;
	}
	else
	{
		FRONT = FRONT + 1; 
	}
	return item;
}
