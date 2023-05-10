#include "stdio.h"
#include "stdlib.h"
struct Linked_display
{
    int value;
    struct Linked_display *next;
};
int print_function(struct Linked_display *ptr)
{
     while(ptr!=NULL)
    {
        printf("%d\n",ptr->value);
        ptr=ptr->next;
    }
}

int main()
{
    struct Linked_display *head,*node_1,*node_2,*node_3,*end;
    head = (struct Linked_display*) malloc(sizeof(struct Linked_display));
    node_1 = (struct Linked_display*) malloc(sizeof(struct Linked_display));
   node_2= (struct Linked_display*) malloc(sizeof(struct Linked_display));
   node_3 = (struct Linked_display*) malloc(sizeof(struct Linked_display));
       end = (struct Linked_display*) malloc(sizeof(struct Linked_display));

    head = 0;
    node_1->value=10;
    node_2->value=20;
    node_3->value=30;
    end->value =40;  

    node_1->next=node_2;
    node_2->next=node_3;
    node_3->next=end;
    end->next=NULL;
    head = node_1;
   print_function(head);
return 0;
}