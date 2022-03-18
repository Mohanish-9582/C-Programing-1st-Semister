/*
Name:- Mohanish Ashok Khambadkar
Batch:- G3 
Roll Number:- 764
Problem Statement:-Write a program in C to display the fibonacci series within a given range.
*/

#include<stdio.h>//preprocessor directive looks for header file i.e. stdio.h. 

int main() //entry point of an execution.
{
 	int t1, t2, num, end, next_term;		//declaration of five variables.
 	t1=0 , t2=1;                           //initializing t1 and t2 for staring of numbers
 	next_term = t1 + t2;                      //addind terms
 	
 	printf("Enter  Number of terms : ");       //outputing to enter number of terms from user
 	scanf("%d",&end);						 //inputing number of term from user
 	printf("\n");
 	
 	printf("				Fibonacci series 				\n"); //giving heading
 	printf("\n");
 	printf("Fibonacci series is:  %d\t  %d\t %d\t", t1, t2, next_term);      //printing fibonacci series. 
 
 	for (num=4 ; num<=end ; num++)  //looping for printing fibonacci series.                                      
	{
  		t1 = t2;                                 //storing value of t2 in t1 i.e t1 = 1.
  		t2 = next_term;                          //storing vale of next_term in t2  i.e t2 = 1.
  		next_term = t1 + t2;                    //performing additionof both t1 and t2  i.e 1+1.
  		
  		printf(" %d \t", next_term);			//giving tab between two terms.
  
 	}

 return 0;	//return to value of function.
}	//end of the program.
