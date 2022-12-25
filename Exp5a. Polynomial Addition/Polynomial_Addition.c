/*
Polynomial Addition
Rahul A B
S3 CSA
52
*/

#include<stdio.h>
#include<stdlib.h>

struct term
{
	int coeff;
	int exp;
};

void main()
{
	int n1,n2,i=0,j=0,k=0,l=0;
	printf("Polynomial Addition\nFirst Polynomial\nEnter The Number Of Exponents In First Polynomial : ");
	scanf("%d",&n1);
	//1st polynomial
	struct term first[n1];
	for(i=0;i<n1;i++)
	{
		printf("Enter The Cofficient Of %d : ",i+1);
		scanf("%d",&first[i].coeff);
		printf("Enter The Exponent Of %d : ",i+1);
		scanf("%d",&first[i].exp);
	}
	//2nd polynomial
	printf("\nSecond Polynomial\nEnter The Number Of Exponents In Second Polynomial : ");
	scanf("%d",&n2);
	struct term second[n2];
	for(i=0;i<n2;i++)
	{
		printf("Enter The Cofficient Of %d : ",i+1);
		scanf("%d",&second[i].coeff);
		printf("Enter The Exponent Of %d : ",i+1);
		scanf("%d",&second[i].exp);
	}
	// Print both Polynomials
	printf("\nPolynomials are: \nPolynomial 1 :");
	for(i=0; i<n1; i++)
	{
		if (i!=0)
			printf("+ %dx^%d ",first[i].coeff,first[i].exp);
		else
			printf(" %dx^%d ",first[i].coeff,first[i].exp);
	}
	printf("\nPolynomial 2 :");
	for(j=0; j<n2; j++)
	{
		if (j!=0)
			printf("+ %dx^%d ",second[j].coeff,second[j].exp);
		else
			printf(" %dx^%d ",second[j].coeff,second[j].exp);
	}
	//Addition
	i=0;
	j=0;
	struct term result[n1+n2];
	while (i<n1 && j<n2)
	{
		if (first[i].exp == second[j].exp)
		{
			int a = first[i].coeff + second[j].coeff;
			result[k].coeff = a;
			result[k].exp = first[i].exp;
			i++;
			j++;
			k++;  
		}
		else if (first[i].exp > second[j].exp)
		{
			result[k].coeff = first[i].coeff;
			result[k].exp = first[i].exp;
			i++;
			k++;
		}
		else
		{
			result[k].coeff = second[j].coeff;
			result[k].exp = second[j].exp;
			j++;
			k++;
		}
	}
	while (i<n1)
	{
			result[k].coeff = first[i].coeff;
			result[k].exp = first[i].exp;
			i++;
			k++; 
	}
	while (j<n2)
	{
		result[k].coeff = second[j].coeff;
		result[k].exp = second[j].exp;
		i++;
		k++;
	}
	//Result
	printf("\nResultant Polynomial :");
	for(l=0; l<k; l++)
	{
		if (l!=0)
			printf("+ %dx^%d ",result[l].coeff,result[l].exp);
		else
			printf(" %dx^%d ",result[l].coeff,result[l].exp);
	}
	printf("\n");
}