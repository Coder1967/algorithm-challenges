#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
bool compare (int a, int b); 
int index_checker(int arr[], int size, int x, bool (*p)(int, int));
/**  
 *  main - main function  
 *   Return: 0(on sucess);  
 */ int main(void)
{   
      	int x, value_check;  
     	int arr[6] = {43,5,67,5,3,21};  
     	unsigned int size = 6;    
       
	x = 3;   
      	value_check = index_checker(arr, size, x, compare);   
     	if (value_check == -1 || value_check == 98 )  
     	{  
	 	printf("ERROR: %d encountered\n", value_check); 
    	}    
       	else  
     	{    
	   	printf("the index of %d is %d\n", x, value_check);   
      	}
   	return (0); 
} 
/**  
 *  compare - function to compare two integers and  
 *   return true or false  
 *   @a: first int to be compared  
 *   @b: second int to compare 
 *   Return: true or false  
 */
bool compare(int a, int b)
{   
      	return (a == b);
} /**  
    index_checker - function to check index of number in an array(if present)  
    @arr: array address  * @size: number of elements in the array  
    @x: number whose index is to be checked  
    @p: pointer containing address of the function compare  
    @return int  
   */
int index_checker(int arr[], int size, int x, bool (*p)(int, int))
{   
     	int i;   
     	
	if (arr != NULL)  
       	{  
	     	for (i = 0; i < (int)size; i++)  
	     	{     
		    	if ((p)(arr[i], x))     
		    	{      
			 	return (i);    
		   	}    
	       	}    
	       	return (-1);  
       	}
     	else  
       	{ 
	  	return (98);  
       	} 
}

