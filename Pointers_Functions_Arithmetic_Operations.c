/*
Name:- Mohanish Ashok Khambadkar
Batch:- G3 
Roll Number:- 764
Problem Statement:-Write a program in C using functions and pointers to display addition, substraction, multiplication, division of two numbers.
*/

#include <stdio.h>		//preprocessor directive looks for header file i.e. stdio.h. 

int addition(int *,int *);		//declaration of addition function.
int substraction(int *,int *);		//declaration of substraction function.
int multiplication(int *,int *);		//declaration of multiplication function.
int division(int *,int *);		//declaration of division function.

int main()
{
	int n1,n2;		//declaration of two variables.
	printf("\nEnter Two Numbers : ");			//printing to inputing the first and second number.
	scanf("%d%d",&n1,&n2);		//inputing first and second number.
	
	addition(&n1,&n2);		//calling of addition function.	
	substraction(&n1,&n2);		//calling of substraction function.
	multiplication(&n1,&n2);		//calling of multiplication function.
	division(&n1,&n2);		//calling of division function.
	printf("\n!!!Your Calculation is Done!!!");
	return 0;		////return to value of function.
}

int addition(int *t1,int *t2) 		//defination for addition function.
{
	int sum;		//declaration of one variable.
	sum = *t1 + *t2;
	printf("\nAddition of two numbers = %d\n ", sum);		//printing addition of two numbers. 
}

int substraction(int *t1,int *t2) 		//defination for substraction function.
{
	int sub;		//declaration of one variable.
	sub = *t1 - *t2;
	printf("\nSubstraction of two numbers = %d\n ", sub);		//printing substraction of two numbers. 
}

int multiplication(int *t1,int *t2) 		//defination for multiplcationon function.
{
	int mult;		//declaration of one variable.
	mult = *t1 * *t2;
	printf("\nMultiplication of two numbers = %d\n ", mult);		//printing multiplication of two numbers. 
}

int division(int *t1,int *t2) 		//defination for division function.
{
	int div;		//declaration of one variable.
	div = *t1 / *t2;
	printf("\nDivision of two numbers = %d\n ", div);		//printing division of two numbers. 
}

