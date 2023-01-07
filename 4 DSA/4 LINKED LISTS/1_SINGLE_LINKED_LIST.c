/* Program for Single linked List */

#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

struct node
{
   int num;
   struct node *next;
};

struct node *first, *cur, *prev;

void init()
{
   first = NULL;
   printf("\n First =  %u", first);
   // getch();
}

void add_node()
{
   struct node *temp;
   int t, ch, pos, st, found = 0;
   // clrscr();
   while (1)
   {
      printf("\n\tAdd Menu \n1. Add at start\n2. Add at End\n3. Add at intermediate position\n4. Exit submenu\nEnter choice : ");
      scanf("%d", &ch);
      switch (ch)
      {
      case 1:
         temp = (struct node *)malloc(sizeof(struct node));

         printf("\n Address of Temp = %u", temp);

         printf("\n Enter data : ");
         scanf("%d", &t); // 10

         temp->num = t; // TEMP->NUM = 10

         temp->next = first; // TEMP->NEXT = 20

         first = temp; // FIRST = 10
         break;
      case 2:
         temp = (struct node *)malloc(sizeof(struct node));
         printf("\n Address of Temp = %u", temp);
         printf("\n Enter data : ");
         scanf("%d", &t);
         temp->num = t;
         cur = first;
         if (cur == NULL)
         {
            first = temp;
         }
         else
         {
            while (cur->next != NULL)
            {
               cur = cur->next;
            }
            cur->next = temp;
         }
         temp->next = NULL;
         break;
      case 3:
         printf("\n Enter the position after which you want to enter data : ");
         scanf("%d", &pos);
         st = 1;
         cur = first;
         while (cur->next != NULL)
         {
            if (st == pos)
            {
               found = 1;
               break;
            }
            else
            {
               cur = cur->next;
               st++;
            }
         }

         if (found == 1)
         {
            temp = (struct node *)malloc(sizeof(struct node));
            printf("\n Enter data : ");
            scanf("%d", &t);
            temp->num = t;
            temp->next = cur->next;
            cur->next = temp;
         }
         else
            printf("\nPosition out of range");
         break;
      case 4:
         return;
      default:
         printf("\n\n Wrong choice\n\n");
      }
   } // end of while
}

void del_node()
{
   struct node *temp;
   int t, ch, pos, st, found = 0;
   // clrscr();
   while (1)
   {
      printf("\n\tDelete Menu \n1. Delete starting node\n2. Delete End node\n3. Delete a intermediate node\n4. Exit submenu\nEnter choice : ");
      scanf("%d", &ch);
      switch (ch)
      {
      case 1:
         if (first == NULL)
         {
            printf("\n Empty list : nothing deleted");
            break;
         }
         temp = (struct node *)malloc(sizeof(struct node));
         temp = first;
         first = first->next;
         printf("\nNode deleted");
         free(temp);
         break;
      case 2:
         if (first == NULL)
         {
            printf("\n Empty list : nothing deleted");
            break;
         }
         temp = (struct node *)malloc(sizeof(struct node));
         cur = prev = first;
         cur = cur->next;
         while (cur->next != NULL)
         {
            prev = cur;
            cur = cur->next;
         }
         temp = cur;
         prev->next = NULL;
         printf("\nNode deleted");
         free(temp);
         break;
      case 3:
         printf("\n Enter the position after which you want to delete node : ");
         scanf("%d", &pos);
         st = 1;
         cur = first;
         while (cur->next != NULL)
         {
            if (st == pos)
            {
               found = 1;
               break;
            }
            else
            {
               cur = cur->next;
               st++;
            }
         }

         if (found == 1)
         {
            temp = cur->next;
            cur->next = temp->next;
            printf("\nNode deleted");
            free(temp);
         }
         else
            printf("\nPosition out of range");
         break;
      case 4:
         return;
      default:
         printf("\n\n Wrong choice\n\n");
      }
   } // end of while
}

void display()
{
   cur = first;
   if (cur == NULL)
   {
      printf("\nEmpty Link!");
      return;
   }
   printf("\nLink List contents are :\n");
   do
   {
      printf("%d\n", cur->num);
      cur = cur->next;

   } while (cur != NULL);
}

int main()
{
   int ch;
   // clrscr();

   init();
   while (1)
   {
      // clrscr();
      printf("\n\tMain Menu \n1. Add element\n2. Delete element\n3. Display elements \n4. Exit\nEnter choice : ");
      scanf("%d", &ch);
      switch (ch)
      {
      case 1:
         add_node();
         break;
      case 2:
         del_node();
         break;
      case 3:
         display();
         //  getch();
         break;
      case 4:
         exit(0);
      default:
         printf("\n\n Wrong choice\n\n");
      }
   } // end of while
}