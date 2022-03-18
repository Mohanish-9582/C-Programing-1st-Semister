/*
Name:- Mohanish Ashok Khambadkar
Batch:- G3 
Roll Number:- 764
Problem Statement:-Write a menu driven program in C to perform addition, subtraction, division and transpose of matrices.
*/

#include<stdio.h> //preprocessor directive looks for header file i.e. stdio.h. 

int main() //entry point of an execution.
{
	int i, j, mat1[3][3], mat2[3][3], add[3][3], sub[3][3], trans[3][3];
	char choice;
	
	printf ("Enter the values of Matrix(1): "); //Values to be put in matrix 1
	for (i=0; i<3; i++)		
	{
		for(j=0; j<3; j++)
		{
			scanf("%d",&mat1[i][j]); //inputing the values of matrix 1
		}
	}
	
	printf ("Enter the values of Matrix(2): "); //values of be put in matrix 2
	for (i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			scanf("%d",&mat2[i][j]); //inputing the values of matrix 2
		}
	}
	
	printf("Elements of Matrix(1) : \n"); //Getting the matrix 1.
	for (i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("%d\t",mat1[i][j]);
		}
		printf("\n");
	}
	
	printf("Elements of Matrix(2) : \n"); //Getting the matrix 2.
	for (i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("%d\t",mat2[i][j]);
		}
		printf("\n");
	}
	
	printf("Enter 1 to perform addition and 2 to perform substraction and 3 to get transpose \n"); 	//choosing the action to perform
	printf("Enter your choice :  ");
	scanf("%d",&choice);
			//inputing choice
	switch (choice)
	{
		case 1:
		{
		printf("Addition of two matrices : \n"); 	//giving output of addition of matrices.
		for (i=0; i<3; i++)
			{
				for(j=0; j<3; j++)
				{
				printf("%d\t",add[i][j] = mat1[i][j] + mat2[i][j]);		//addition of two matrices
				}
				printf("\n");
		
			}break;		//breaking the case
		}
		case 2:	
		{
		printf("Substraction of two matrices : \n");	 //giving output of substraction of matrices.
		for (i=0; i<3; i++)
			{
				for(j=0; j<3; j++)
				{
					printf("%d\t",sub[i][j] = mat1[i][j] - mat2[i][j]);		//substraction of two matrices.
				}
				printf("\n");		
			}
		break;		//breaking the case
		}
		case 3:
		{
			printf("Transpose of Matrix(1) : \n"); 		//Getting transpose of matrix 1.
			for (i=0; i<3; i++)
			{
				for(j=0; j<3; j++)
				{
					printf("%d\t",mat1[j][i]);		//output transpose of matrix 1.
				}
				printf("\n");		
			}
			printf("Transpose of Matrix(2) : \n");		 //Getting transpose of matrix 2.
			for (i=0; i<3; i++)
			{
				for(j=0; j<3; j++)
				{
					printf("%d\t",mat2[j][i]);		//output transpose of matrix 2.
				}
				printf("\n");
			}
			break;		//breaking the case
		}
	}
  return 0;		 //return to value of function.
} 		//End of the Program
