#include <stdio.h>
#include <stdlib.h>
/**
 * struct node - struct containing the template for the linked list
 * @data: stores integer on the list
 * @link: contains adress that serves to link the list
 */
typedef struct node 
{     
	int data;    
       	struct node *link;
}node;
/**
 * del_first_node - function to delete first node of list
 * @head: variable of type struct for containing the address head of the list
 * Return: head
 */
node *del_first_node(node *head) 
{    
       	node *temp;  

    	temp = head; 
    	head = head->link; 
    	free(temp); 
    	temp = NULL;   
      	return (head); 
} 
/**
 * print_list - function to print linked list
 * @head: variable of type struct node to which the adress is to be passed
 * Return: nothing(void)
 */
void print_list(node *head) 
{    
       	node *ptr;

       	ptr = head;    
       	while(ptr != NULL)  
     	{       
	      	printf("%d\t", ptr->data);
	   	ptr = ptr->link;   
      	}  
	putchar('\n');
}
int main(void) 
{ 
    	node *head = (node *) malloc(sizeof(node));

       	head->data = 60;   
      	head->link = NULL; 
    	node *box1 = (node *) malloc(sizeof(node));
   
	head->link = box1; 
    	box1->data = 98;   
      	box1->link = NULL;    
       	node *box2 = (node *) malloc(sizeof(node)); 
    
	box1->link = box2; 
    	box2->data = 654;  
     	box2->link = NULL;  
   print_list(del_first_node(head)); 
   return (0);
}
