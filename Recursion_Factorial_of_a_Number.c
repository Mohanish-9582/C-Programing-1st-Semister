/*
Name:- Mohanish Ashok Khambadkar
Batch:- G3 
Roll Number:- 764
Problem Statement:- Write a program in C using recursion to display the factorial of a number.
*/

#include <stdio.h>		//preprocessor directive looks for header file i.e. stdio.h.
int fact (int n)		//declaration of factorial function.
{
	if(n==1)		
	{
		return 1;		//returning the value to 1 of factorial of a number.
	}
	else
	{
		return n*fact(n-1);		//returning the factorial of a  given number.	
	}
}
int main()		//entry point of an execution.
{
	int n;		//declaration of one variable.
	printf("Enter the Number : ");		//printing for inputing the number.
	scanf("%d",&n);		//inputing the number of which factorial is to be calculated.
	printf("Factorial of %d : %d", n, fact(n));		//printing the factorial of a number
	return 0;		//return to value of function.
}		//End of the program.

