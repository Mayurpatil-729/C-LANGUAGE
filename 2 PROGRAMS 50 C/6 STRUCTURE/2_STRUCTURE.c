// Date :

// #include <stdio.h>

// struct cricket
// {
//     char player_name[50], country_name[50];
//     int best_score;
//     float batting_average;
// };

// int main()
// {
//     int a, n;

//     struct cricket c1;
//     printf("\t cricket player details\n");

//     printf("\n\tEnter Player name =: ");
//     // scanf("%s", c1.player_name);
//     gets(c1.player_name);

//     printf("\n\tEnter the country name=");
//     // scanf("%s", c1.country_name);
//     gets(c1.country_name);

//     printf("\n\tEnter the best score =");
//     scanf("%d", &c1.best_score);

//     printf("\n\tEnter the batting average =");
//     scanf("%f", &c1.batting_average);

//     printf("\n\tPlayer Details : ");

//     printf("\n\tPlayer name = %s ", c1.player_name);

//     printf("\n\tcountry name = %s ", c1.country_name);

//     printf("\n\tbest score = %d ", c1.best_score);

//     printf("\n\tbatting average = %f", c1.batting_average);
//     return 0;

//     // Coded by Mayur
// }

#include <string.h>
#include <stdio.h>
#include <conio.h>
struct cricket
{
    char pname[20];
    char tname[20];
    float bavg;
};

int main()
{
    struct cricket s[5], t;
    int i, j, n = 5;
    float p;

    printf("\nEnter data of %d players", n);
    for (i = 0; i < n; i++)
    {
        printf("\nEnter PName TName BAvg for player-%d = ", i + 1);
        scanf("%s %s %f", s[i].pname, s[i].tname, &p);
        s[i].bavg = p;
    }
    for (i = 1; i <= n - 1; i++)
    {
        for (j = 1; j <= n - i; j++)
        {
            if (strcmp(s[j - 1].tname, s[j].tname) > 0)
            {
                t = s[j - 1];
                s[j - 1] = s[j];
                s[j] = t;
            }
        }
    }
    printf("\nAfter teamwise sorting... Player list is ");
    for (i = 0; i < n; i++)
    {
        printf("\n%-20s %-20s %.2f", s[i].pname, s[i].tname, s[i].bavg);
    }

    return 0;
}
