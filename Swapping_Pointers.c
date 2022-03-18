/*
Name:- Mohanish Ashok Khambadkar
Batch:- G3 
Roll Number:- 764
Problem Statement:- Write a program in C using function and pointers to swap two numbers.
*/

#include <stdio.h>//preprocessor directive looks for header file i.e. stdio.h. 

int swap(int *,int *);		//declaration of swapping function.

int main()
{
	int n1,n2;		//declaration of two variables.
	printf("\nEnter first number  and second number : ");			//printing to inputing the first and second number.
	scanf("%d%d",&n1,&n2);		//inputing first and second number.
	printf("\nOriginal values of first number and second number = %d and %d\n\n",n1,n2);		//printing original values of two numbers.
	swap(&n1,&n2);		//calling of swapping finction.	
	return 0;		////return to value of function.
}		//End of the program.

int swap(int *t1,int *t2) 		//defination for swapping function.
{
	int t;		//declaration of one Variable.
	
	t = *t1;		//logic behind swapping.
	*t1 = *t2;
	*t2 = t;
	
	printf("Swaped values of first number and second number = %d and %d", *t1,*t2);		//printing swaped values
}

