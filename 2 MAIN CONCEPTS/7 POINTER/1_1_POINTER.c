//Date :

// #include <stdio.h>
// int main()
// {
//     int j=63;
//     int*p;
//     p=&j;
    
//     printf("\t\n The address of j is  : %x\n",&j);
//     printf("\t\n p contains address is : %x\n",p);
//     printf("\t\n The value of j is  : %d\n",j);
//     printf("\t\n p is pointing to the value : %d\n",*p);
    
//     return 0;

// // Coded by Mayur
// }





//Date :

#include <stdio.h>
int main()
{
    int x=5;
    int y;
    int *p;
    p=&x;

    y = *p+2;               //  y is assigned 7
    y += *p;               //   y is assigned 12
    *p = y;                  // x is assigned 12
    (*p)++;                  //x is incremented to 13 //bracket should be taken when incremented
    
    printf("\t\n p is pointing to the value %d  \n",*p);
  
     
    return 0;

// Coded by Mayur
}



