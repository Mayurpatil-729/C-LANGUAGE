// Date :

#include <stdio.h>
int main()
{
  char ch;

  printf("\n Program to accept character from user\n");
  printf("\n\n Enter any character == ");
  scanf("%c", &ch);

  if (ch >= 'A' && ch <= 'Z')
    printf("\n\tCAPITAL ALPHABET");
  else
  {
    if (ch >= 'a' && ch <= 'z')
      printf("\t SMALL ALPHABET");
    else if (ch >= 0 && ch <= 9)
      printf("\t DIGITS ");
    else
      printf("\t SPECIAL SYMBOLS");
  }
  return 0;

  // Coded by Mayur
}