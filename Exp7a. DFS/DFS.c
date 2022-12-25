/*
	DFS
	Rahul A B
	S3 CSA
	52
*/

#include<stdio.h>
#define size 100

int matrix[size][size],maxSize,i,j,visited[size];
void readMatrix(){
	printf("DFS-Depth First Search Using Adjustancy Matrix\nEnter the number of vertices : ");
	scanf("%d",&maxSize);
	printf("Enter Matrix Values\n");
	for(int i=0;i<maxSize;i++){
		for(int j=0;j<maxSize;j++)
			scanf("%d",&matrix[i][j]);
	}	
}

void DFS(int v){
	int i;
	printf("\t%d",v);
	visited[v]=1;
	for(int i=0;i<maxSize;i++){
		if (matrix[v][i]==1 && !visited[i])
			DFS(i);
	}
}

void main(){
	readMatrix();
	printf("\nDFS Result :");
	DFS(0);
	printf("\n");
}