/*
Name:- Mohanish Ashok Khambadkar
Batch:- G3 
Roll Number:- 764
Problem Statement:- Write a program in C using recursion to display fibonacci series within a given range.
*/

#include <stdio.h>//preprocessor directive looks for header file i.e. stdio.h.

int fibo(int n)		//declaration fo fibonacci function.
{
	int a;		//declaration of one variable.
	if(n==0)
		return 0;			//return 0 to value of function.
	if(n==1)
		return 1;		//returning the value to 1 of factorial of a number.
	return fibo(n-1)+fibo(n-2);		//returning the fibonacci series condition of a  given number.
	
}

int main()		//entry point of an execution.
{
	int n,i;		//declaration of two variable.
	printf("Enter the Number : ");		//printing for inputing the number.
	scanf("%d",&n);		//inputing the number up tp which get fibonacci series.
	printf("Fibonacci series are as follows : \n");			//printing fibonacci series.
	for (i=0; i<n; i++)		//condition for inputing the fibonacci series.
	{
		printf("%d\t",fibo(i));		//printing tab between two numbers of fibonacci series.
	}
	return 0;		//return to value of function.
}

