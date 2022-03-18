/*
Name:- Mohanish Ashok Khambadkar
Batch:- G3 
Roll Number:- 764
Problem Statement:-Write a program in C to display the addition of N numbers stored in an array.
*/

#include<stdio.h> //preprocessor directive looks for header file i.e. stdio.h. 

int main() //entry point of an execution.
{
		int num[10], i=0, sum=0;  //declaration of array intializing sum = 0 and i.
		printf("Enter 10 numbers : "); //printing statement for entering the 10 numbers.
		
		for(i=0; i<10; i++) //looping for inputing numbers as per given condition.
		{
			scanf("%d",&num[i]); //inputing numbers to stored in array.
		}
		for (i=0; i<10; i++) //looping for doing addition of numbers as per given condition.
		{
			sum = sum + num[i]; //addition of all numbers.
		}
		printf("Sum of numbers is = %d", sum); //printing addition of numbers.
		
	return 0; //return to value of function.
} //end of the program.
