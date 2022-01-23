/*
Name:- Mohanish Ashok Khambadkar
Batch:- G3 
Roll Number:- 764
Problem Statement:-Write a program in C to display the quotient and remainder after the division of two numbers
*/

#include <stdio.h>/*#include is a preprocessor directive. Looks for the stdio.h header file.
stdio.h is a header file which consist of Standard Input Output functions e.g. printf().*/

void main()//main is an entry point of execution
{
	int num1, num2, quotient, remainder;//declaring 4 variable as integer
	
	printf("\nEnter the first number = "),//printf statement entering value of num1.
	scanf("%d",&num1);//inputing value of num1
	printf("\nEnter the second number = "),//printf statement entering value of num2.
	scanf("%d",&num2);//inputing value of num2.
	
	quotient = num1/num2;// quotient from two number i.e. num1 & num2.
	remainder =num1%num2; // remainder from two number i.e. num1 & num2.
	
	printf("\nQuotient = %d",quotient); //display output quotient of two numbers i.e. num1 & num2.
	printf("\nRemainder = %d",remainder);//display output remainder of two numbers i.e. num1 & num2.
	
}
