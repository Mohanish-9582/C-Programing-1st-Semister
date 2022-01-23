/*
Name:- Mohanish Ashok Khambadkar
Batch:- G3 
Roll Number:- 764
Problem Statement:-Write a menu driven program in C to display addition, subtraction, multiplication, division of two numbers.
*/
#include <stdio.h>/*#include is a preprocessor directive. Looks for the stdio.h header file.
stdio.h is a header file which consist of Standard Input Output functions e.g. printf().*/

int main()//main is an entry point of execution
{
	int a,b,add,sub,mult,div;//declaring 6 variable as a integer.
	add=sub=mult=div=0;//initializing add,sub,mult,div as 0.
	printf("Enter the value of a");//print statement of entering value of a.
	scanf("%d",&a);//inputing value of a.
	printf("Enter the value of b");//print statement of entering value of b.
	scanf("%d",&b);//inputing value of b.
	add=a+b;//addition of two number i.e. a & b.
	sub=a-b;//substraction of two number i.e. a & b.
	mult=a*b;//Multiplication of two number i.e. a & b.
	div=a/b;//Division of two number i.e. a & b.
	printf("Addition of two number %d",add);//display output addition of two numbers i.e a & b.
	printf("Subtraction of two number %d\n",sub);//display output substraction of two numbers i.e. a & b in next line.
	printf("Multiplication of two number %d\n",mult);//display output multiplication of two numbers i.e. a & b in next line.
	printf("Division of two number %d\n",div);//display output division of two numbers i.e. a & b in next line.
	return(0) ;//return to value of function.
	
}//end of program.
	
