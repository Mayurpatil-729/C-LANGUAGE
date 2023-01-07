/* Program for binary search tree operations*/

# include<stdio.h>
# include<conio.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *root;

struct node *loc, *par;

void init()
{
    root=NULL;
}

void insertNode()
{
    int num;
    char ch;
    struct node *temp, *cur, *prev;
    do
    {
     printf("\nEnter data : ");
     scanf("%d", &num);
     temp = (struct node*)malloc(sizeof(struct node));
     temp->data = num;
     temp->left = NULL;
     temp->right = NULL;
     if(root==NULL)
      {
       root = temp;
      }
     else
      {
        cur = prev = root;
	if( temp->data < cur->data)
	   cur = cur->left;
	else
	   cur = cur->right;
        while(cur!=NULL)
        {
         if(temp->data < cur->data)
           {
            prev=cur;
            cur=cur->left;
           }
         else
           {
            prev=cur;
            cur=cur->right;    
           }
        }//end of while
       if( temp->data < prev->data)
           prev->left = temp;
       else
           prev->right = temp;
      }         
     printf("\nDo you want to continue [y/n] : ");
     ch=getche();
    }while(ch != 'n');
   
  
}


void find(int item)
{
    struct node *ptr, *save;
    if(root == NULL)
      { 
       loc = NULL;  
       par = NULL; 
       return;
      }
    if(root->data == item)
      { 
       loc = root;  
       par = NULL; 
       return;
      }
    if(item < root->data)
      {
       ptr=root->left;
       save = root;
      }
    else
      {
       ptr=root->right;
       save = root;
      }          
   
    while(ptr != NULL)
      {
        if(item == ptr->data)
          { 
           loc = ptr;  
           par = save; 
           return;
          }
        if(item < ptr->data)
          {
            save = ptr;
            ptr=ptr->left;            
          }
        else
          {
            save = ptr;
            ptr=ptr->right;            
          }          
        
      }
    loc = NULL;
    par = save;
}

void delcaseA(struct node *loc, struct node *par)
{
    struct node *child;
    if(loc->left==NULL && loc->right==NULL)
       child=NULL;
    else
     {
       if(loc->left!=NULL)
	  child = loc->left;
       else
	  child = loc->right;
     }
    if(par!=NULL)
     {
	if(loc==par->left)
	   par->left = child;
	else
	   par->right = child;
     }
    else
       root = child;
}

void delcaseB()
{
   struct node *ptr, *save, *suc, *parsuc;

   ptr = loc->right;
   save = loc;
   while(ptr->left != NULL)
       {
	 save = ptr;
	 ptr = ptr->left;
       }


   suc = ptr;
   parsuc = save;

   delcaseA(suc, parsuc);

   if(par != NULL)
    {
      if(loc == par->left)
	  par->left = suc;
      else
	  par->right = suc;
    }
   else
    root = suc;

   suc->left = loc->left;
   suc->right = loc->right;
}

void deleteNode()
{
   int delitem;
   printf("\n\nEntre the node to delete : ");
   scanf("%d", &delitem);
   find(delitem);
   if(loc == NULL)
     {
       printf("\nNode not present in tree\n");
       return;
     }
   if(loc->left!=NULL && loc->right!=NULL)
     delcaseB();
   else
     delcaseA(loc, par);
   printf("\n\nNode deleted");         
   
}

void printtree(struct node *tree, int level)
{
   int i=0;
   if(tree)
   {
     printtree(tree->right, level + 1);
     printf("\n\n");
     for(i=0; i<level; i++)
	  printf("     ");
     printf("%d",tree->data);
     printtree(tree->left, level+1);
   }

}



void main()
{
    int ch;
    clrscr();
    init();
    do
     {
      printf("\nMain menu :\n");
      printf("\n1) Insert node/s \n2) Delete node \n3) Display tree \n4) Exit\n\nEnter choice :");
      scanf("%d", &ch); 
      switch(ch)
      {
        case 1 : insertNode();
                 break;
  
        case 2 : deleteNode();
                 break;
        
        case 3 : printtree(root, 1);
                 getch();
                 break;
        
        case 4 : exit(0);
      
        default : printf("\nWrong choice!!");
       }
     }while(ch != 4);

}