/*
Name:- Mohanish Ashok Khambadkar
Batch:- G3 
Roll Number:- 764
Problem Statement:-Write a menu driven program in C to demonstrate the use of left shift, right shift, and, or, xor operators.
*/

#include <stdio.h>/*#include is a preprocessor directive. Looks for the stdio.h header file.
stdio.h is a header file which consist of Standard Input Output functions e.g. printf().*/

int main()
{
	int am,ldc,son; //declaring 4 variables as integer.
	son=0; //initializing son as 0
	
	printf("Enter the first number = "); //entering the value of first number.
	scanf("%d",&am);//inputing value for first number.
	printf("Enter the second number = "); //entering the value of second number.
	scanf("%d",&ldc);//inputing value for second number.
	
	son = am & ldc; //And operator from two variable i.e. am & ldc.
	printf("And - Value of third number = %d\n",son); //Display output of and operator.
	
	son = am | ldc;//OR operator from two variable i.e. am & ldc.
	printf("OR - Value of third number = %d\n",son); //Display output of OR operator.
	
	son = am ^ ldc;//XOR operator from two variable i.e. am & ldc.
	printf("XOR - Value of third number = %d\n",son); //Display output of XOR operator.
	
	son = am << 2;//Left shift by 4bits  from am.
	printf("Left Shift - Value of third number = %d\n",son); //Display output of Left Shift operator.
	
	son = am >> 2;//Right shift by 4bits  from am.
	printf("Right Shift - Value of third number = %d\n",son); //Display output of Right Shift operator.
	
	return 0;

}//End of the program
