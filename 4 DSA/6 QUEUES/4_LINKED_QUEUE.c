/* Program for Linked Queue */
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

struct node
{
  int num;
  struct node *next;
};

struct node *front, *rear, *cur, *prev;

void init()
{
  front = NULL;
  rear = NULL;
}

void add_node()
{
  struct node *temp;
  int t, ch;
  clrscr();
  while (1)
  {
    printf("\n\tAdd Menu \n1. Add at End\n4. Exit submenu\nEnter choice : ");
    scanf("%d", &ch);
    switch (ch)
    {

    case 1:
      temp = (struct node *)malloc(sizeof(struct node));
      printf("\n Address of Temp = %u", temp);
      printf("\n Enter data : ");
      scanf("%d", &t);
      temp->num = t;

      cur = front;

      if (cur == NULL)
      {
        front = temp;
        rear = temp;
      }
      else
      {
        while (cur->next != NULL)
        {
          cur = cur->next;
        }
        cur->next = temp;
        rear = temp;
      }
      temp->next = NULL;
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
  int ch;
  clrscr();
  while (1)
  {
    printf("\n\tDelete Menu \n1. Delete starting node\n4. Exit submenu\nEnter choice : ");
    scanf("%d", &ch);
    switch (ch)
    {
    case 1:
      if (front == NULL)
      {
        printf("\n Empty Linked Queue : nothing deleted");
        break;
      }

      temp = front;
      front = front->next;
      printf("\nNode deleted");
      free(temp);
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
  cur = front;
  if (cur == NULL)
  {
    printf("\nEmpty Linked Queue!");
    return;
  }
  printf("\nLink Queue contents are :\n");
  do
  {
    printf("%d\n", cur->num);
    cur = cur->next;

  } while (cur != NULL);
}

void main()
{
  int ch;
  clrscr();

  init();
  while (1)
  {
    clrscr();
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
      getch();
      break;
    case 4:
      exit(0);
    default:
      printf("\n\n Wrong choice\n\n");
    }
  } // end of while
}