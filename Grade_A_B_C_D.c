#include <stdio.h>
int main()
{
	int Percentage;
	printf("Enter Your Percentage/Marks = "); 
	scanf("\n%d",&Percentage); 
	
	if (Percentage<=100 && Percentage>= 90)
	    printf("You have passed with AA grade in Examination."); 
	    
	else if (Percentage<90 && Percentage>= 75) 
	    printf("You have passed with BB grade in Examination."); 
	
	else if (Percentage<75 && Percentage>= 60) 
	    printf("You have passed with CC grade in Examination."); 
		
	else
	    printf ("You have passed with DD grade in Examination."); 
		
	return 0;			    
} 
