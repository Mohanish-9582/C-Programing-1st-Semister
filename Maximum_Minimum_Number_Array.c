/*
Name:- Mohanish Ashok Khambadkar
Batch:- G3 
Roll Number:- 764
Problem Statement:-Write a program in C to display the minimum and maximum element in an array.
*/
#include<stdio.h>//preprocessor directive looks for header file i.e. stdio.h. 
int main() //entry point of an execution.
{
	int arr[10] = {11, 87, 97, 25, 8, 35, 101, 112, 75, 64}; //declaration of array and elements in array.
	int max, min, i; // declaration of three variables.
	min = arr[0]; //initializing the minimum value.
	max = arr[0]; //initializing the maximum value.
	for (i=0; i<10; i++) //looping for printing minimum and maximum numbers.
		{
			if (min>arr[i])	//condition for minimum numbers.
			{
				min = arr[i]; //storing minimum number in min.
			}
			if (max < arr[i]) //condition for maximum numbers.
			{
				max = arr[i]; //storing minimum number in max.
			}
		}
	printf ("Minimum value is [%d]\n",min); //printing minimum numbers.
	printf ("Maximum value is [%d]",max); //printing maximum numbers.
	return 0; //return to value of function.
} //end of the program.
