/*
Name:- Mohanish Ashok Khambadkar
Batch:- G3 
Roll Number:- 764
Problem Statement:- Write a program in C to accept the information of students and store it in array of structure and display the same.
*/

#include <stdio.h>		//preprocessor directive looks for header file i.e. stdio.h.
struct stud		//declaration of structure.
{
	char name[20];		//declaration of one char variable.
	int roll_no;		//declaration of one int variable.
	float per;		//declaration of one float variable.
}s[10];		//end declaration of structure.

int main()		//entry point of an execution.
{
	{
		int i,n;
		printf("How many students record do you want? \n");
		scanf("%d",&n);
		for (i=0;i<n;i++)
		{
			printf("\nEnter the Name of the Student : ");		//printing to enter the name of the student.
			scanf("%s",&s[i].name);		//inputing the name of the student.
			printf("\nEnter the Roll No. of the Student : ");		//printing to enter the roll no. of the student.
			scanf("%d",&s[i].roll_no);		//inputing the roll no. of the student.
			printf("\nEnter the Percentage of the Student : ");	//printing to enter the percentage of the student.
			scanf("%f",&s[i].per);		//inputing the percentage of the student.
			printf("Data of Student  \n");		//printing the heading as Data of Student.
			printf("Name : %s\n Roll No. : %d\n Percentage : %f",s[i].name,s[i].roll_no,s[i].per);	//Printing name, roll no., and percentage.
		}
		printf("\n\nYou have enter the following data\n");
		printf("\nName\t Roll No.\t Percentage\n");
		for(i=0;i<n;i++)
		{
			printf("%s\t%d\t%f\n",s[i].name,s[i].roll_no,s[i].per);		//Printing all data of students
		}
    }
	return 0;		//return to value of function.
}		//End of the Program.
