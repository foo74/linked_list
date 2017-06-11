#ifndef MAIN_H
#define MAIN_H

struct node 
{
   int data;
   struct node *next;
};

int append_list(struct node *head, int data);
int print_list(struct node *head);
int free_list(struct node *head);

#endif
