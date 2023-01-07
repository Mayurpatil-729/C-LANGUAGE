/*Program for addition of two polynomials using link list*/

# include<stdio.h>
# include<conio.h>

struct term
{
    int coef;
    int order;
    struct term *next;
};

struct term *poly1, *poly2, *poly3, *cur, *temp;

void init()
{
    poly1 = NULL;
    poly2 = NULL;
    poly3 = NULL;
}

void readpoly()
{
   int deg1, deg2, i, tcoef;
   printf("\nEnter the degree of the first polynomial : ");
   scanf("%d", &deg1);
   for(i=deg1; i>=0; i--)
   {
     printf("\n\tEnter coefficient for x^%d = ",i);
     scanf("%d", &tcoef);
     if(tcoef != 0)
       {
	temp = (struct term*)malloc(sizeof(struct term));
        temp->coef = tcoef;
	temp->order=i;
        temp->next=NULL;
	cur = poly1;
	if(cur==NULL)
	  poly1=temp;
	else
	{
	  while(cur->next != NULL)
	    {  cur = cur->next; }
	  cur->next=temp;
	}
       }
   }
   printf("\nEnter the degree of the second polynomial : ");
   scanf("%d", &deg2);
   for(i=deg2; i>=0; i--)
   {
     printf("\n\tEnter value for x^%d = ",i);
     scanf("%d", &tcoef);
     if(tcoef != 0)
       {
	temp = (struct term*)malloc(sizeof(struct term));
        temp->coef = tcoef;
	temp->order=i;
	temp->next=NULL;
	cur = poly2;
	if(cur==NULL)
	  poly2=temp;
	else
	{
	  while(cur->next != NULL)
	    {
		cur = cur->next;
	    }
	  cur->next=temp;
	}
       }
   }
}

void addpoly()
{
   struct term *curpoly1, *curpoly2;
   curpoly1=poly1;
   curpoly2=poly2;
   while( (curpoly1 != NULL) && (curpoly2 != NULL) )
   {
     if(curpoly1->order == curpoly2->order)
     {
       temp = (struct term*)malloc(sizeof(struct term));
       temp->coef = curpoly1->coef + curpoly2->coef;
       temp->order=curpoly1->order;
       temp->next=NULL;
       cur = poly3;
	if(cur==NULL)
	  poly3=temp;
	else
	{
	  while(cur->next != NULL)
	    {
	    cur = cur->next;
	    }
	  cur->next=temp;
	}
       curpoly1 = curpoly1->next;
       curpoly2 = curpoly2->next;
     }

     if(curpoly1->order > curpoly2->order)
     {
       temp = (struct term*)malloc(sizeof(struct term));
       temp->coef = curpoly1->coef;
       temp->order=curpoly1->order;
       temp->next=NULL;
       cur = poly3;
	if(cur==NULL)
	  poly3=temp;
	else
	{
	  while(cur->next != NULL)
	    {  cur = cur->next;  }
	  cur->next=temp;
	}
       curpoly1 = curpoly1->next;
     }

     if(curpoly2->order > curpoly1->order)
     {
       temp = (struct term*)malloc(sizeof(struct term));
       temp->coef = curpoly2->coef;
       temp->order=curpoly2->order;
       temp->next=NULL;
       cur = poly3;
	if(cur==NULL)
	  poly3=temp;
	else
	{
	  while(cur->next != NULL)
	    {
		cur = cur->next;
	    }
	  cur->next=temp;
	}
       curpoly2 = curpoly2->next;
     }

   }


   while(curpoly1 != NULL)
   {
       temp = (struct term*)malloc(sizeof(struct term));
       temp->coef = curpoly1->coef;
       temp->order=curpoly1->order;
       temp->next=NULL;
       cur = poly3;
	if(cur==NULL)
	  poly3=temp;
	else
	{
	  while(cur->next != NULL)
	    {  cur = cur->next;  }
	  cur->next=temp;
	}
       curpoly1 = curpoly1->next;
  }

  while(curpoly2 != NULL)
  {
       temp = (struct term*)malloc(sizeof(struct term));
       temp->coef = curpoly2->coef;
       temp->order=curpoly2->order;
       temp->next=NULL;
       cur = poly3;
	if(cur==NULL)
	  poly3=temp;
	else
	{
	  while(cur->next != NULL)
	    {  cur = cur->next;  }
	  cur->next=temp;
	}
       curpoly2 = curpoly2->next;
  }


}

void displayResult()
{
   printf("\nThe first polynomial is :\n");
   cur=poly1;
   while(cur->next!=NULL)
   {
    printf("(%d)x^%d + ",cur->coef,cur->order);
    cur=cur->next;
   }
   printf("(%d)x^%d = 0 ",cur->coef,cur->order);

   printf("\n\nThe second polynomial is :\n");
   cur=poly2;
   while(cur->next!=NULL)
   {
    printf("(%d)x^%d + ",cur->coef,cur->order);
    cur=cur->next;
   }
   printf("(%d)x^%d = 0 ",cur->coef,cur->order);


   printf("\n\nThe addition of these two polynomials is :\n");
   cur=poly3;
   while(cur->next!=NULL)
   {
    printf("(%d)x^%d + ",cur->coef,cur->order);
    cur=cur->next;
   }
   printf("(%d)x^%d = 0 ",cur->coef,cur->order);
}


int main(void)
{
   clrscr();
   init();
   printf("\nEnter the two polynomials : \n");
   readpoly();
   clrscr();
   addpoly();
   printf("\nResult : \n");
   displayResult();
   getch();
   return 0;
}