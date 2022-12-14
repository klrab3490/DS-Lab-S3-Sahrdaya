 /*
Sparse Matrix Addition
Rahul A B
S3 CSA
52
*/

#include<stdio.h>
#include<stdlib.h>

void main()
{
	int r1=0,c1=0,r2=0,c2=0,i=0,j=0,k=1,count1=0,count2=0;
/*
    Matrix A
    r1,c1
*/	
    printf("Sparse Matrix Addition\nMatrix A \nEnter Number Of Rows : ");
	scanf("%d",&r1);
	printf("Enter Number Of Columns : ");
	scanf("%d",&c1);
	int A1[r1][c1];
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			printf("A[%d][%d] = ",i,j);
			scanf("%d",&A1[i][j]);
            if (j==(c1-1))
            {
                printf("\n");
            }
		}
	}
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {
            if (A1[i][j]!=0)
            {
                count1++;
            }
        }
    }
    int A2[count1][3];
    A2[0][0]=r1;
    A2[0][1]=c1;
    A2[0][2]=count1;
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {
            if (A1[i][j]!=0)
            {
                A2[k][0]=i;
                A2[k][1]=j;
                A2[k][2]=A1[i][j];
                k++;
            }
        }
    }
/*
    Matrix B
    r2,c2
*/
	printf("\nMatrix B \nEnter Number Of Rows : ");
	scanf("%d",&r2);
	printf("Enter Number Of Columns : ");
	scanf("%d",&c2);
	int B1[r2][c2];
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
			printf("B[%d][%d] = ",i,j);
			scanf("%d",&B1[i][j]);
            if (j==(c2-1))
            {
                printf("\n");
            }
		}
	}
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {
            if (B1[i][j]!=0)
            {
                count2++;
            }
        }
    }
    int B2[count2][3];
    k=1;
    B2[0][0]=r2;
    B2[0][1]=c2;
    B2[0][2]=count2;
    for(int i=0;i<r2;i++)
    {
        for(int j=0;j<c2;j++)
        {
            if (B1[i][j]!=0)
            {
                B2[k][0]=i;
                B2[k][1]=j;
                B2[k][2]=B1[i][j];
                k++;
            }
        }
    }
/*
    Printing Sparse Matrix
*/
    printf("Sparse Matrix A\n");
    for(int i=0;i<=count1;i++)
    {
        for (int j=0;j<3;j++)
        {
            printf("%d\t",A2[i][j]);
            if (j==2)
            {
                printf("\n");
            }
        }
    }
    printf("\nSparse Matrix B\n");
    for(int i=0;i<=count2;i++)
    {
        for (int j=0;j<3;j++)
        {
            printf("%d\t",B2[i][j]);
            if (j==2)
            {
                printf("\n");
            }
        }
    }
    if (A2[0][0]==B2[0][0] && A2[0][1]==B2[0][1])
    {
        i=1;
        j=1;
        k=1;
        int a=count1+count2;
        int C[a][3];
        C[0][0]=A2[0][0];
        C[0][1]=A2[0][1];
        while (i<=count1 && j<=count2)
        {
            if (A2[i][0]==B2[j][0] && A2[i][1]==B2[j][1])
            {
                C[k][0]=A2[i][0];
                C[k][1]=A2[i][1];
                C[k][2]=(A2[i][2]+B2[j][2]);
                i++;
                j++;
                k++;
            }
            else if (A2[i][0]==B2[j][0])
            {
                C[k][0]=A2[i][0];
                if (A2[i][1]<B2[j][1] && i<A2[0][2])
                {
                    C[k][1] = A2[i][1];
                    C[k][2] = A2[i][2];
                    k++;
                    i++;
                }
                else
                {
                    C[k][1] = B2[j][1];
                    C[k][2] = B2[j][2];
                    k++;
                    j++;
                }
            }
            else 
            {
                if (A2[i][0] < B2[j][0])
                {
                    C[k][0] = A2[i][0];
                    C[k][1] = A2[i][1];
                    C[k][2] = A2[i][2];
                    k++;
                    i++;
                }
                else
                {
                    C[k][0] = B2[j][0];
                    C[k][1] = B2[j][1];
                    C[k][2] = B2[j][2];
                    k++;
                    j++;
                }
            }
        }
        while (i<=count1)
        {
            C[k][0]=A2[i][0];
            C[k][1]=A2[i][1];
            C[k][2]=A2[i][2];
            i++;
            k++;
        }
        while (j<=count2)
        {
            C[k][0]=B2[j][0];
            C[k][1]=B2[j][1];
            C[k][2]=B2[j][2];
            j++;
            k++;
        }
        C[0][2]=(k-1);
        printf("\nSparse Matrix Sum Is:\n");
        for (int i=0;i<k;i++)
        {
            for (int j=0;j<3;j++)
            {
                printf("%d\t",C[i][j]);
                if (j==2)
                {
                    printf("\n");
                }
            }
        }
    }
    else
    {
        printf("Sparse Matrix not Possible\n");
    }
}
