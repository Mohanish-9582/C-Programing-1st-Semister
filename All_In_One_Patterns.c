/*
1st Pattern
OUTPUT:
Enter Limit : 8
*
**
***
****
*****
******
*******
********
*********

INPUT:*/
#include<stdio.h>
int main() //entry point of an execution.
{
	int i,j,lim; //declaration of three variables.
	printf("Enter Limit : "); //printing the limit.
	scanf("%d",&lim); //inputing the limit.
	
	for(i=0; i<=lim; i++) //looping for printing * symbol in row.
	{
		for(j=0;j<=i;j++) //looping for printing * symbol in column.
		{
			printf("*"); //printing * symbol according to condition of loop.
		}
		printf("\n"); //going to next line.
	}
	return 0; //return to value of function.
}



/*
2nd Pattern
OUTPUT:
Enter Limit : 8
********
*******
******
*****
****
***
**
*

INPUT:*/
#include<stdio.h> //preprocessor directive looks for header file i.e. stdio.h.
int main() //entry point of an execution.
{
	int i,j,lim; //declaration of three variables.
	printf("Enter Limit : "); //printing the limit.
	scanf("%d",&lim); //inputing the limit.
	
	for(i=lim; i>=1; i--) //looping for printing * symbol in row.
	{
		for(j=1;j<=i;j++) //looping for printing * symbol in column.
		{
			printf("*"); //printing * symbol according to condition of loop.
		}
		printf("\n"); //going to next line.
	}
	return 0; //return to value of function.
} 



/*
3rd Pattern
OUTPUT:
Enter Limit : 8

       *
      ***
     *****
    *******
   *********
  ***********
 *************
***************

INPUT:*/
#include<stdio.h> //preprocessor directive looks for header file i.e. stdio.h.
int main() //entry point of an execution.
{
	int i,star,space,lim; //declaration of four variables.
	printf("Enter Limit : "); //printing the limit.
	scanf("%d",&lim); //inputing the limit.
	for(i=0; i<=lim; i++) //loop for printing pyramid using * symbol.
	{
		for(space=0;space<lim-i;space++) //loop for printing space.
		{
			printf(" "); //printing space.
		}
			
		for(star=1;star<=(2*i)-1;star++) //loop for printing * symbol.
		{
			printf("*"); // printing star.
		}
		printf("\n"); //going to next line.
	}
	return 0; //return to value of function.
}



/*
4th Pattern
OUTPUT:
Enter Limit : 8
***************
 *************
  ***********
   *********
    *******
     *****
      ***
       *

INPUT:*/
#include<stdio.h>//preprocessor directive looks for header file i.e. stdio.h.
int main() //entry point of an execution.
{
	int i,star,space,lim; //declaration of four variables.
	printf("Enter Limit : "); //printing the limit.
	scanf("%d",&lim); //inputing the limit.
	for(i=lim; i>=1; i--)//loop for printing reverse pyramid using * symbol.
	{
		for(space=0; space<lim-i; space++) //loop for printing space.
		{
			printf(" "); //printing space.
		}
			
		for(star=1;star<=(2*i)-1;star++) //loop for printing * symbol.
		{
			printf("*"); // printing star.
		}
		printf("\n"); //going to next line.
	}
	return 0; //return to value of function.
}



/*
5th Pattern
OUTPUT:
Enter Limit : 8
        *
       ***
      *****
     *******
    *********
   ***********
  *************
 ***************
  *************
   ***********
    *********
     *******
      *****
       ***
        *

INPUT:*/
#include<stdio.h> //preprocessor directive looks for header file i.e. stdio.h.
int main() //entry point of an execution.
{
	int i,star,space,lim; //declaration of four variables.
	printf("Enter Limit : "); //printing the limit.
	scanf("%d",&lim); //inputing the limit.
	for(i=1; i<=lim; i++) //looping for printing upper pyramid.
	{
		for(space=lim; space>=i; space--) //looping for printing space.
		{
			printf(" "); //printing space.
		}	
		for(star=1; star<=(2*i)-1; star++) //looping for printing * symbol.
		{
			printf("*"); // printing star.
		}
		printf("\n"); //going to next line.
	}
	
	for(i=lim-1; i>=1; i--) //looping for printing down pyramid.
	{
		for(space=i; space<=lim; space++) //looping for printing space.
		{
			printf(" "); //printing space.
		}	
		for(star=1; star<=(2*i)-1; star++) //looping for printing * symbol.
		{
			printf("*"); // printing star.
		}
		printf("\n"); //going to next line.
	}
	return 0; //return to value of function.
}



/*
6th Pattern
OUTPUT:
Enter Limit : 8
*
**
***
****
*****
******
*******
********
*********
********
*******
******
*****
****
***
**
*

INPUT:*/
#include<stdio.h> //preprocessor directive looks for header file i.e. stdio.h.
int main() //entry point of an execution.

{
	int i,j,lim; //declaration of three variables.
	printf("Enter Limit : "); //printing the limit.
	scanf("%d",&lim); //inputing the limit.
	for(i=0; i<=lim; i++) //looping for printing right angle triangle.
	{
		for(j=0;j<=i;j++) //looping for printing star.
		{
			printf("*"); //printing * symbol according to condition of loop.
		}
		printf("\n"); //going to next line.
	}
	
	for(i=1; i<=lim; i++) //looping for printing inverse right angle triangle.
 	{
 		 for(j=i; j<=lim; j++) //printing * symbol according to condition of loop.         
  		{
   			printf("*"); //printing * symbol according to condition of loop.             
  		}
  		printf("\n"); //going to next line.              
 	}
	return 0; //return to value of function.
}



/*
7th Pattern
OUTPUT:
Enter Limit : 8

***************
******* *******
******   ******
*****     *****
****       ****
***         ***
**           **
*             *

INPUT:*/
#include<stdio.h> //preprocessor directive looks for header file i.e. stdio.h.
int main() //entry point of an execution.
{
  int i,star,space,lim; //declaration of four variables.	
  printf("Enter Limit : "); //printing the limit.
  scanf("%d",&lim); //inputing the limit.
  printf("\n"); //for next line.
  for(i=0; i<=lim; i++) //looping for printing pattern.
  {
    for(star=0; star<lim-i; star++) //logical condition for looping.
    {
      printf("*"); //printing * symbol.
    }  
    for(space=1; space<=i-1; space++) //logical condition for looping.
    {
      printf(" ");//printing space
    }
    for(space=0; space<=i-1; space++) //logical condition for looping.
    {
      printf(" "); //printing space.
    }
    for(star=0; star<lim-i; star++) //logical condition for looping.
    {
    	if(star!=lim-1) 
      printf("*"); //printing * symbol.
    }
    printf("\n"); //for next line.
  }
  return 0; //return to value of function
}



/*
8th Pattern
OUTPUT:
Enter Limit: 8

*             *
**           **
***         ***
****       ****
*****     *****
******   ******
******* *******
***************

INPUT:*/
#include <stdio.h> //preprocessor directive looks for header file i.e. stdio.h.
int main () //entry point of an execution.

{
 	int i, star, lim, space; //declaration of four variables.
 	printf("Enter Limit: "); //printing the limit.      
 	scanf("%d", &lim); //inputing the limit.
 	printf("\n"); //for next line.
 	
 	for(i=1; i<=lim; i++) //looping for printing pattern.	
 	{
  		for(star=1; star<=i; star++) //logical condition for looping.           
  		 {
   		printf("*"); //printing * symbol.
     	}
     	
  		for(space=i+1; space<lim; space++) //logical condition for looping.
  		{
   		printf(" "); //printing space.
  		}
  		
  		for(space=i ; space<lim; space++) //logical condition for looping.
  		{
   		printf(" "); //printing space.
  		}
  
  		for(star=1 ; star<=i; star++) //logical condition for looping.          
  		{
  			if(star<lim)
  			printf("*"); //printing * symbol.        
  		}
  
  		printf("\n"); //for next line.             
  
 		}
 return 0; //return to value of function.
}



/*
Diamond Pattern
OUTPUT:
Enter Limit: 8
***************
******* *******
******   ******
*****     *****
****       ****
***         ***
**           **
*             *
*             *
**           **
***         ***
****       ****
*****     *****
******   ******
******* *******
***************

INPUT:*/
#include<stdio.h> //preprocessor directive looks for header file i.e. stdio.h.
int main() //entry point of an execution.
{
  int i,star,space,lim; //declaration of four variables.	
  printf("Enter Limit : "); //printing the limit.
  scanf("%d",&lim); //inputing the limit.
  printf("\n"); //for next line.
  for(i=0; i<lim; i++) //looping for printing pattern.
  {
    for(star=0; star<lim-i; star++) //logical condition for looping.
    {
      printf("*"); //printing * symbol.
    }  
    for(space=1; space<=i-1; space++) //logical condition for looping.
    {
      printf(" ");//printing space
    }
    for(space=0; space<=i-1; space++) //logical condition for looping.
    {
      printf(" "); //printing space.
    }
    for(star=0; star<lim-i; star++) //logical condition for looping.
    {
    	if(star!=lim-1) 
      printf("*"); //printing * symbol.
    }
    printf("\n"); //for next line.
  }
  for(i=1; i<=lim; i++) //looping for printing pattern.	
 	{
  		for(star=1; star<=i; star++) //logical condition for looping.           
  		 {
   		printf("*"); //printing * symbol.
     	}
     	
  		for(space=i+1; space<lim; space++) //logical condition for looping.
  		{
   		printf(" "); //printing space.
  		}
  		
  		for(space=i ; space<lim; space++) //logical condition for looping.
  		{
   		printf(" "); //printing space.
  		}
  
  		for(star=1 ; star<=i; star++) //logical condition for looping.          
  		{
  			if(star<lim)
  			printf("*"); //printing * symbol.        
  		}
  
  		printf("\n"); //for next line.             
 	}
  return 0; //return to value of function
}
