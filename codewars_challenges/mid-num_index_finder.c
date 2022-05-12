#include <stdlib.h>
#include <stdio.h>
/**
 * gimme - function to find the index of the numerically middle number from an array of integers
 * @triplets: array containing the integers
 * Return: index position
 */
int gimme(const int triplets[3]) 
{ 
      	int i = 0;   
       	if ((triplets[0] >triplets[1] && triplets[0] < triplets[2]) || (triplets[0] < triplets[1] && triplets[0] > triplets[2]))    
       	{        
		i = 0;   
      	}  
      	else if ((triplets[1] >triplets[0] && triplets[1] < triplets[2]) || (triplets[1] < triplets[0] && triplets[1] > triplets[2]))    
       	{      
	     	i = 1;   
      	}
     	else   
      	{      
	       	i = 2; 
    	}     
	if(i == 0)
 	{     
	    	return 0;  
   	}   
    	else if (i == 1) 
	{        
	     	return 1;    
   	}     
	else if(i == 2)   
    	{     
	 	return 2;
 	}
}
/**
 * main - main function
 * Return: 0
 */
int main(void)
{
	int i; int arr[3];

	puts("enter 3 integers");
	for (i = 0; i < 3; i++)
	{
		scanf("%d", arr + i);
	}
	printf("the index of the numerically middle number is: %d\n", gimme(arr));

	return (0);
}
