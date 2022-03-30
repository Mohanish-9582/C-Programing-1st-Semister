/*
Name:- Mohanish Ashok Khambadkar
Batch:- G3 
Roll Number:- 764
Problem Statement:- Write a program in C to display Semester Grade Point Average (SGPA). Input will be stored in array of structure.
*/

#include <stdio.h>		//preprocessor directive looks for header file i.e. stdio.h.
struct SGPA		//declaration of structure.
{
	int cred_alloted;
	int grade_points;
	int cred_earned;
}sg[5];		//end declaration of structure.

int main()		//entry point of an execution.
{
	float sgpa;		//declaration one of float variable.
	int n,i, total_credits=0, total_allcredits=0;		//declaration of four float variable.
	printf("How many courses : ");		//Printing for getting how many courses.
	scanf("%d",&n);		//inputing the number of courses.
	for (i=1;i<=n;i++)		//testing condition for printing grades as per number of courses.
	{	printf("Enter credits alloted for course %d : ",i);		//printing to get credits alloted for course.
		scanf("%d",&sg[i].cred_alloted);		//inputing credited alloted.
		printf("Enter grade points earned for course %d : ",i);		//printing to get grade points earned for course.
		scanf("%d",&sg[i].grade_points);		//inputing grade points.
	}
	for (i=1; i<n;i++)		
	{
		sg[i].cred_earned = sg[i].cred_alloted * sg[i].grade_points;		//logic of credits earned.
		total_credits = total_credits + sg[i].cred_earned;		//logic for total credits..
		total_allcredits = total_allcredits + sg[i].cred_alloted;		//logic for all credits.
	}
	sgpa=total_credits/total_allcredits;		// logic of SGPA
	printf("\nFinal SGPA = %f",sgpa);		//printing SGPA.
	return 0;		//return to value of function.
}//End of the program.
