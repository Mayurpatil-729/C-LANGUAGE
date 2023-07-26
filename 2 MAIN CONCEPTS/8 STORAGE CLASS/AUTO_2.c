#include <stdio.h>
#include <conio.h>
void a_increment();
void s_increment();
void main()
{

    a_increment();
    a_increment();
    a_increment();
    s_increment();
    s_increment();
    s_increment();
    getch();
}
void a_increment()
{
    auto int i = 1;
    printf("\t %d", i);
    i++;
}
void s_increment()
{
    static int i = 1;
    printf("\t %d", i);
    i++;
}