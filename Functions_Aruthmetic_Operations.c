/*
Name:- Mohanish Ashok Khambadkar
Batch:- G3 
Roll Number:- 764
Problem Statement:-Write a program in C using functions to display addition, subtraction, multiplication, division of two numbers.
*/

#include<stdio.h> //preprocessor directive looks for header file i.e. stdio.h. 
int add(int,int);		// declaration of addition function.
int sub(int,int);		// declaration of substraction function.
int mult(int,int);		// declaration of multiplication function.
int div(int,int);		// declaration of division function.
int main() 

{
	int n1,n2;		//declaration of two variable.
	printf("Enter the First Number\t\t= \t");		//printing to inputing the first nunber.	
	scanf("%d",&n1);		//inputing the first number.
	printf("\n");		
	printf("Enter the Second Number\t\t= \t");		//printing to inputing the second nunber.
	scanf("%d",&n2);		//inputing the second number.
	
	add(n1,n2);		//defination of addition function.
	sub(n1,n2);		//defination of substraction function.
	mult(n1,n2);		//defination of multiplication function.
	div(n1,n2);		//defination of division function.
	
	return 0;		//return to value of function.
}

int add(int t1, int t2)		//function call for addition function.
{
	int add;		//declaration of one variable.
	add = t1 + t2;		//addition of two numbers.
	printf("\n\nAddition of two numbers %d and %d \t\t =\t %d",t1,t2,add);		//printing addition of two numbers.
}

int sub(int t1, int t2)		//function call for substractiom function.
{
	int sub;		//declaration of one variable.
	sub = t1 - t2;		//substraction of two numbers.
	printf("\n\nSubstraction of two numbers %d and %d \t =\t %d",t1,t2,sub);		//printing substraction of two numbers.
}

int mult(int t1, int t2)		//function call for multiplication function.
{
	int mult;		//declaration of one variable.
	mult = t1 * t2;		//multplication of two numbers.
	printf("\n\nMultiplication of two numbers %d and %d \t =\t %d",t1,t2,mult);		//printing multiplicaiton of two numbers.	
}

int div(int t1, int t2)		//function call for division function.
{
	int div;		//declaration of one variable.
	div = t1 / t2;		//division of two numbers.
	printf("\n\nDivision of two numbers %d and %d \t\t =\t %d",t1,t2,div);		//printing division of two numbers.
}
//End of Program
