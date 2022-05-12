#include <stdio.h> 
/** 
 * code to count number of divisor of a positive *integer n. 
 * divisors - function to count possible number of divisors
 * @n: positive number to be checked 
 * Return: the number of divisors 
 */  
int divisors(int n) 
{
     int i, count = 0;

      for (i = 1; i <= n; i++)     
      {         if (n % i == 0)         
                  count++;
      }     
      return (count); 
}  
int main(void) 
{     
  printf("%d\n", divisors(4));    
  return (0); 
}
