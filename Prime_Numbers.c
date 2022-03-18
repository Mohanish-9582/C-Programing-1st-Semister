/*
Name:- Mohanish Ashok Khambadkar
Batch:- G3 
Roll Number:- 764
Problem Statement:-Write a program in C to display the prime numbers within a given range.
*/

#include<stdio.h>//preprocessor directive looks for header file i.e. stdio.h. 

int main() //entry point of an execution.
{
	int n1,n2,start,end,temp;				//declaration of five variables.
	
	printf("Enter Start Value & End value = "); //output for giving start and end value.
	scanf("%d%d",&start,&end);					//inputing start and end value.
	printf("\n");
	printf("				Prime numbers between given range are				");		//giving heading.
	printf("\n");		
	if(start==1)
		start++;
	for(n1=start; n1<end; n1++)			//looping for printing prime numbers.
	{
		temp=1;							//number is prime.
		for(n2=2; n2<n1; n2++)
		{
			if(n1%n2==0)		//giving condition. 
			{
				temp=0;
				break;		//breaking the statement
			}		
		}	
		if(temp==1)				//giving condition number divided by itself.
			printf("%d\t",n1);		//giving tab between two terms.
	}
	return 0;  //return to value of function.
} //end of the program.
