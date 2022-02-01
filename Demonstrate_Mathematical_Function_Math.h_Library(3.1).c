#include <stdio.h>
#include<math.h>
int main ()
{
	char choice;
	double ceil_temp, floor_temp, sqrt_temp, pow_temp, abs_temp;
	int base, expo;
	float neg,number;
	
	printf("\nPress a to perform Ceil_Temp.");
	printf("\nPress b to perform Floor_Temp.");
	printf("\nPress c to perform Squrt_Temp.");
	printf("\nPress d to perform Pow_Temp.");
	printf("\nPress e to perform Abs_Temp.");
	
	printf("\nEnter your choice:- ");
	scanf("%c",&choice);
	
	switch(choice)
	
	{
		case 'a':
		ceil_temp = ceil(34.95);
	printf("\nRound up value of 34.15 is %lf",ceil_temp);
		break;
	
		case 'b':
	floor_temp = floor(3.1);
	printf("\nRound up value of 3.1 is %f",floor_temp);
		break;
		
		case 'c':
		sqrt_temp = sqrt(625);
	printf("\nSquare root of 625 is %lf",sqrt_temp);
		break;
	
		case 'd':
	pow_temp = pow(base,expo);
	printf("\n%lf",pow_temp);
		break;
	
		case 'e':
	abs_temp = abs(neg);
	printf("\nAbsolute value of %f is %d",neg,abs_temp);
		break;
		default:
			printf("\n!!!!!!!!Wrong Choice!!!!!!!!");
		break;
	}
	
	
	return 0;
}//End of Program
