#include <stdio.h>
#include <string.h>
int main (){
   char txt[] = "tutorialsPointisthebestplatformforprogrammers";
   char pat[] = "a";
   int i;
   int M = strlen (pat);
   int N = strlen (txt);
   for (i = 0; i <= (N - M); i++)
   {
      int j;
      for (j = 0; j < M; j++)
         if (txt[i + j] != pat[j])
      break;
      if (j == M)
         printf ("Pattern matches at index %d \n", i);
   }
   return 0;
}

/*Output
Pattern matches at 6
Pattern matches at 25
Pattern matches at 39*/