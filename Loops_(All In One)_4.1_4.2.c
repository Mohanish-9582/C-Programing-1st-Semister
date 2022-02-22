
/*4.1.a(N_Numers_WhileLoop )
OUTPUT:	
Number = 1
Number = 2
Number = 3
Number = 4
Number = 5

INPUT:*/
#include <stdio.h> 
int main() 
{
		int start,end;
	printf ("Enter the Starting Number & Ending Number = "); 
	scanf ("%d%d",&start,&end);
	while (start<=end)
		{
			printf ("\nNumber = %d",start);
			    start++; 
		}
	return 0;
}



/*4.1.b(N_Numers_do_WhileLoop)
OUTPUT:
Number is 1
Number is 2
Number is 3
Number is 4

INPUT:*/
#include <stdio.h>
int main() //main is an entry point of execution.
{
	int start,end; //declaration of two variable.
	
	printf("Enter the Starting Number & Ending Number = "); 
	scanf("%d%d",&start,&end);
	do
		{
			printf ("\nNumber is %d",start); //for printing the numbers in series.
				start++; //for doing increment in variable.
		}	
	while (start<=end); 
	return 0;	
}



/*4.1.c(N_Numers_For_Loop)
OUTPUT:
Number is 1
Number is 2
Number is 3

INPUT:*/
#include <stdio.h> 
int main() 
{
	int start,end,n; 
	printf("Enter the Starting Number & Ending Number = "); 
	scanf ("%d%d",&start,&end);
	for (n=start; n<=end; n++)
		{
			printf ("\nNumber is %d",n);
		}
	return 0;	
}



/*4.2.a(Reverse_N_Numers_WhileLoop )
OUTPUT:
Number = 4
Number = 3
Number = 2
Number = 1

INPUT:*/
#include <stdio.h> 
int main() 
{
	int start,end; /
	printf ("Enter the Starting Number(Greater) & Ending Number(Smaller) = "); 
	scanf ("%d%d",&start,&end);
	while (start>=end) 
		{
			printf ("\nNumber = %d",start); 
			    start--;
		}			
	return 0;
}



/*4.2.b(N_Reverse_Numers_do_WhileLoop)
OUTPUT:
Number is 5
Number is 4
Number is 3
Number is 2

INPUT:*/
#include <stdio.h> 
int main() 
{
	int start,end; 
		printf ("Enter the Starting Number(Greater) & Ending Number(Smaller) = ");
		scanf("%d%d",&start,&end);
	do
		{
			printf ("\nNumber is %d",start);
				start--;
		}
	while (start>=end);
	return 0; 	
}



/*4.2.c(Reverse_N_Numers_For_Loop)
OUTPUT:
Number is 10
Number is 9
Number is 8
Number is 7
Number is 6
Number is 5
Number is 4
Number is 3

INPUT:*/

#include <stdio.h> 
int main() 
{
	int start,end,n; 
		printf ("Enter the Starting Number(Greater) & Ending Number(Smaller) = "); 
		scanf ("%d%d",&start,&end);
	for (n=start; n>=end; n--) 
		{
			printf ("\nNumber is %d",n); 
		}
	return 0; 	
}
