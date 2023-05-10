#include "stdio.h"
#include "stdlib.h"
struct node 
{
    int data;
    struct node *link_to_next;
};

int print_funtion(struct node *print_ptr)
{
  while(print_ptr->link_to_next != NULL)
        {
            printf("%d\n",print_ptr->data);
            print_ptr = print_ptr->link_to_next;
        }
}

struct node* making_node(int data_f_main,struct node* next_node)
{
   struct node* temp = (struct node*)malloc(sizeof(struct node));
     temp->data= data_f_main;
     temp->link_to_next=next_node;
     return temp;
}
int main()
{
    int values[]={12,23,34,45,56,67},size;  
    size = sizeof(values)/sizeof(values[0]);
    struct node* head = NULL;
    struct node* nodes;
      for(int loop_1=size-1;loop_1>=0;loop_1--)
       {
        nodes = making_node(values[loop_1],nodes);
        head = nodes;
       } 
        print_funtion(nodes);
    return 0;
}




/*    <<<...====== TYPE II ======...>>>>
int main()
{
    struct node *head,*next_1,*next_2,*next_3,*next_4,*next_5,*end;
    head = 0;
    next_1 = (struct node*)malloc(sizeof(struct node));
    next_2 = (struct node*)malloc(sizeof(struct node));
    next_3 = (struct node*)malloc(sizeof(struct node));
    next_4 = (struct node*)malloc(sizeof(struct node));
    next_5 = (struct node*)malloc(sizeof(struct node));
    end = (struct node*)malloc(sizeof(struct node));
     printf("Enter the data ....\n");
     next_1->data=12;
     next_2->data=23;
     next_3->data=34;
     next_4->data=45;
     next_5->data=56;
     end->data=67;
     next_1->link_to_next=next_2;
     next_2->link_to_next=next_3;
     next_3->link_to_next=next_4;
     next_4->link_to_next=next_5;
     next_5->link_to_next=end;
     end->link_to_next=NULL;
     if(head == NULL) 
       {
           head = next_1;
       } 
        print_funtion(head);
    return 0;
}*/