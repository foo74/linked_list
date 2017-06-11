#include "main.h"
#include <stdio.h>
#include <stdlib.h>


int main()
{
   struct node *head = 0;
   head = malloc(sizeof(struct node));
   head->data = 8;

   insert(head, 5);
   print_list(head);

   free_list(head);

   return 0;
}


int append_list(struct node *head, int data)
{
   struct node *walker = head;
   struct node *tmp = 0;
   struct node *new_guy = 0;
   new_guy = malloc(sizeof(struct node));
   new_guy->data = data;

   /* walk to end of list */
   while (walker)
   {
      tmp = walker;
      walker = walker->next;
   }

   /* insert at end of list */
   tmp->next = new_guy;
   
   return 0;
}

int print_list(struct node *head)
{
   struct node *walker = head;
   while (walker)
   {
      printf("data: %d\n", walker->data);
      walker = walker->next;
   }
   return 0;
}

int free_list(struct node *head)
{
   struct node *walker = 0;
   struct node *old_guy = 0;

   walker = head;
   while (walker)
   {
      old_guy = walker;
      walker = walker->next;
      free(old_guy);
   }

   return 0;
}
