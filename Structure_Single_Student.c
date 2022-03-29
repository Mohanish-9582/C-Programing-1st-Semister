/*
Name:- Mohanish Ashok Khambadkar
Batch:- G3 
Roll Number:- 764
Problem Statement:- Write a program in C to accept the information of single student and store it in structure and display the same.
*/

#include <stdio.h>		//preprocessor directive looks for header file i.e. stdio.h.
struct stud		//declaration of structure.
{
	char name[20];		//declaration of one char variable.
	int roll_no;		//declaration of one int variable.
	float per;		//declaration of one float variable.
}s;		//end declaration of structure.

int main()		//entry point of an execution.
{
	struct stud s;		//declaration of structure variables.
	printf("Enter the Name of the Student : ");		//printing to enter the name of the student.
	scanf("%s",s.name);		//inputing the name of the student.
	printf("Enter the Roll No. of the Student : ");		//printing to enter the roll no. of the student.
	scanf("%d",&s.roll_no);		//inputing the roll no. of the student.
	printf("Enter the Percentage of the Student : ");	//printing to enter the percentage of the student.
	scanf("%f",&s.per);		//inputing the percentage of the student.
	printf("Data of Student  \n");		//printing the heading as Data of Student.
	printf("Name : %s\n Roll No. : %d\n Percentage : %f",s.name,s.roll_no,s.per);		//Printing name, roll no., and percentage.

	return 0;		//return to value of function.
}		//End of the Program.

