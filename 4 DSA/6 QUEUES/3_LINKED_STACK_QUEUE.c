
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

void Linked_stack();
void Linked_queue();
void init_stack();
void init_queue();
void add_node_stack();
void add_node_queue();
void del_node_stack();
void del_node_queue();
void display_stack();
void display_queue();

struct node
{
  int num;
  struct node *next;
};

struct node *top, *cur, *front, *rear, *cur, *prev;
;

void main()
{

  int choice;
 // clrscr();
  do
  {
    printf("\n\t\tProgram for Linked_Stack and Linked_Queue \n");
    printf("\n\tMain Menu: \n1.Linked_Stack\n2.Linked_Queue\n3.Exit");
    printf("\nSelect menu : ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
      Linked_Stack();
      break;
    case 2:
      Linked_Queue();
      break;
    case 3:
      printf("\nExiting the program");
      break;

    default:
      printf("Invalid menu item selected.");
    }
  } while (choice != 3);
}

Linked_Stack()
{
  int ch;
  //clrscr();

  init_stack();

  while (1)
  {
    //clrscr();
    printf("\n\tMain Menu \n1. Add element\n2. Delete element\n3. Display elements \n4. Exit\nEnter choice : ");
    scanf("%d", &ch);
    switch (ch)
    {
    case 1:
      add_node_stack();
      break;
    case 2:
      del_node_stack();
      break;
    case 3:
      display_stack();
      getch();
      break;
    case 4:
      return 0;

    default:
      printf("\n\n Wrong choice\n\n");
    }
  }
}

void init_stack()
{
  top = NULL;
}

void add_node_stack()
{
  struct node *temp;
  int t, ch;
 // clrscr();

  while (1)
  {
    printf("\n\tAdd Menu \n1. Add on TOP \n4. Exit submenu\nEnter choice : ");
    scanf("%d", &ch);

    switch (ch)
    {
    case 1:
      temp = (struct node *)malloc(sizeof(struct node));
      printf("\n Address of Temp = %u", temp);
      printf("\n Enter data : ");
      scanf("%d", &t);
      temp->num = t;
      temp->next = top;
      top = temp;
      break;
    case 4:
      return;
    default:
      printf("\n\n Wrong choice\n\n");
    }
  } // end of while
}

void del_node_stack()
{
  struct node *temp;
  int ch;
 // clrscr();
  while (1)
  {
    printf("\n\tDelete Menu \n1. Delete Top node\n4. Exit submenu\nEnter choice : ");
    scanf("%d", &ch);
    switch (ch)
    {
    case 1:
      if (top == NULL)
      {
        printf("\n Empty Stack : nothing deleted");
        break;
      }

      temp = top;
      top = top->next;
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

void display_stack()
{
  cur = top;
  if (cur == NULL)
  {
    printf("\nEmpty Linked Stack!");
    return;
  }
  printf("\nLink Stack contents are :\n");
  do
  {
    printf("%d\n", cur->num);
    cur = cur->next;

  } while (cur != NULL);
}

Linked_Queue()
{

  int ch;
  //clrscr();

  init_queue();

  while (1)
  {
   // clrscr();
    printf("\n\tMain Menu \n1. Add element\n2. Delete element\n3. Display elements \n4. Exit\nEnter choice : ");
    scanf("%d", &ch);

    switch (ch)
    {
    case 1:
      add_node_queue();
      break;
    case 2:
      del_node_queue();
      break;
    case 3:
      display_queue();
      getch();
      break;
    case 4:
      return 0;
    default:
      printf("\n\n Wrong choice\n\n");
    }
  } // end of while
}

void init_queue()
{
  front = NULL;
  rear = NULL;
}

void add_node_queue()
{
  struct node *temp;
  int t, ch;
 // clrscr();
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

void del_node_queue()
{
  struct node *temp;
  int ch;
  //clrscr();
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

void display_queue()
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
