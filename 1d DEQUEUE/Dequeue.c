#include<stdio.h>
#include<string.h>
#define Size 100 
 
int DEQUEUE[Size];
int LEFT=-1, RIGHT=-1, item, maxSize;

void insertRight();
void insertLeft();
int deleteRight();
int deleteLeft();
void displayDEQUEUE();
void main(){
	int choice=0;
	printf("DEQUEUE\nEnter The Size Of DEQUEUE :");
	scanf("%d",&maxSize);
	do{
		printf("\n========================= \n DEQUEUE Operation Menu \n ========================= \n 1.Insertion Through Right \n 2.Insertion Through Left \n 3.Deletion Through Right \n 4.Deletion Through Left \n 5.Display \n 6.Exit \n\t Enter Choice : ");
		scanf("%d",&choice);
		switch (choice){
			case 1:
				insertRight();
				break;
			case 2:
				insertLeft();
				break;
			case 3:
				deleteRight();
				break;
			case 4:
				deleteLeft();
				break;
			case 5:
				displayDEQUEUE();
				break;
			case 6:
				printf("Exiting\n");
				break;
			default:
				printf("!!Invaild!!\n");
				break;
		}
	}while (choice!=6);
}

void insertRight(){
	printf("Choice Made Is Right Insertion\n");
	if ((LEFT==0 && RIGHT==maxSize-1) || (LEFT==RIGHT+1)){
		printf("DEQUEUE is full");
	}
	else{
		if (LEFT==-1 && RIGHT==-1){	
			LEFT=0;
			RIGHT=0;
		}
		else if (RIGHT==maxSize-1){
			RIGHT=0;
		}
		else{
			RIGHT=RIGHT+1;
		}
		printf("Enter The Value : ");
		scanf("%d",&item);
		DEQUEUE[RIGHT]=item;
	}
}

void insertLeft(){
 	printf("Choice Made Is Left Insertion\n");
	if ((LEFT==0 && RIGHT==maxSize-1) || (LEFT==RIGHT+1)){
		printf("DEQUEUE is full");
	}
	else{
		if (LEFT==-1 && RIGHT==-1){	
			LEFT=0;
			RIGHT=0;
		}
		else if (LEFT==0){
			LEFT=maxSize-1;
		}
		else{
			LEFT=LEFT-1;
		}
		printf("Enter The Value : ");
		scanf("%d",&item);
		DEQUEUE[LEFT]=item;
	}
}

int deleteRight(){
	printf("Choice Made Is Right Deletion\n");
	if (LEFT==-1 && RIGHT==-1){
		printf("DEQUEUE is empty");
	}
	else{
		item=DEQUEUE[RIGHT];
		printf("Deleted Item is : %d",item);
		if (LEFT==RIGHT){
			LEFT=-1;
			RIGHT=-1;
		}
		else if (RIGHT==0){
			RIGHT=maxSize-1;
		}
		else{
			RIGHT=RIGHT-1;
		}
	}
}







int deleteLeft(){
	printf("Choice Made Is Left Deletion\n");
	if (LEFT==-1 && RIGHT==-1){
		printf("DEQUEUE is empty");
	}
	else{
		item=DEQUEUE[LEFT];
		printf("Deleted Item is : %d",item);
		if (LEFT==RIGHT){
			LEFT=-1;
			RIGHT=-1;
		}
		else if (LEFT==maxSize-1){
			LEFT=0;
		}
		else{
			LEFT=LEFT+1;
		}
	}
}

void displayDEQUEUE(){
	printf("Choice Made Is Display\n");	
	if (LEFT==-1 && RIGHT==-1){
		printf("DEQUEUE is empty");
	}
	else if (LEFT<=RIGHT){
		for (int i = LEFT; i <= RIGHT; i++){
			printf("%d\t",DEQUEUE[i]);
		}
	}
	else{
		for (int i = 0; i <= RIGHT; i++){
			printf("%d\t",DEQUEUE[i]);
		}
		for (int i = LEFT; i < maxSize; i++){
			printf("%d\t",DEQUEUE[i]);
		}
	}
}

