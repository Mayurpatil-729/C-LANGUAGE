// Date :

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct
{
    int num;
    char *info;
} record;

int main()
{
    record *recs;
    int num_recs = 2;
    int k;
    char str[] = "This is information";
    recs = calloc(num_recs, sizeof(record));
    if (recs != NULL)
    {
        for (k = 0; k < num_recs; k++)
        {
            (recs + k)->num = k;
            (recs + k)->info = malloc(sizeof(str));
            printf("%d\n", sizeof(str));
            strcpy((recs + k)->info, str);
        }
    }

    printf("you program run successfully !");
    return 0;

    // Coded by Mayur
}

//* calloc() function allocates memory based ont the size of a specific item
//* such as a structure, it allocates blocks of memory within a contiguous block of memory for
//* and array of structure elements.you can navigate from one strucrue to the next with
//* pointer arithmetic

//*  malloc() function aallocate memory for the string within the structure: