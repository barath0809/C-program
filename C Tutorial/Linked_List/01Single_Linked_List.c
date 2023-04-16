#include "stdio.h"
#include "stdlib.h"
typedef struct node {
    struct node * prev;
    int value;
    struct node* next;
}node_t;
void print_function(node_t *head)
{
   node_t *temprory = head;
   while (temprory!=NULL)
   {
    printf("-> %d \n",temprory->value);
    temprory = temprory->next;
   }
   
}
int main()
{
    node_t n[3];
    node_t *head;
     node_t *tail;
    n[0].value = 21;
    n[1].value = 32;
    n[2].value = 43;
   

   // link the values with addres
   head = &n[0];
   n[2].next = NULL;
   n[1].next = &n[2];
   n[0].next = &n[1];
  print_function(head);

   tail = &n[2];
   n[0].next = NULL;
   n[1].next = &n[0];
   n[2].next = &n[1];
   print_function(tail);
    return 0;
}