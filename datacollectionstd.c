/*
Read &print deatils of n students & find the student with First Rank
Name: Rahul A B 
Roll No: 52
*/

#include<stdio.h>
void main()
{
	struct Std_data
	{
		int slno;
		char name[50];
		int roll;
		float mark;
	};
	int a=0,i=0;
	printf("student Data\n==============================\nEnter Number of Student: ");
	scanf("%d",&a);
	struct Std_data students[a];
	struct Std_data firstrank;
	for(i=0;i<a;i++)
	{
		printf("Detail Of %dth Student",i+1);
		students[i].slno=i+1;
		printf("\nEnter Name: ");
		scanf("%s",students[i].name);
		printf("Enter Roll Number: ");
		scanf("%d",&students[i].roll);
		printf("Enter Mark: ");
		scanf("%f",&students[i].mark);
		printf("==============================\n");
	}
	firstrank=students[0];
	for(i=0;i<a;i++)
	{
		if (students[i].mark>firstrank.mark)
		{
			firstrank=students[i];
		}
	}
	printf("Details Of the Stident Who Score the First Rank is \nName:\t %s\nRoll No:%d\nMark:\t %f\n",firstrank.name,firstrank.roll,firstrank.mark);
}
