/* One Simple C Program to conclude Structure */
struct book
{
	char name[10];
	int pages;
	float price;
};
struct book b1={"LETUSC",369,123.456};
struct book b2;

void main()
{
clrscr();
printf("\n Book1 Details are=>");
printf("\n Book1 Name= %s, Book1 Pages= %d, Book1 Price=%f", b1.name, b1.pages,b1.price);
printf("\n Enter Book2 Details Name Pages & Price=>");
scanf("%s %d %f", &b2.name, &b2.pages, &b2.price);
printf("\n Book2 Details are=>");
printf("\n Book2 Name= %s, Book2 Pages= %d, Book2 Price=%f", b2.name, b2.pages,b2.price);
getch();
}

/* Output of the Program

Book1 Details are=>
Book1 Name= LETUSC, Book1 Pages=369, Book1 Price=123.456
Enter Book2 Details Name Pages & Price=>
PHYSICS 123 456.789
Book2 Details are=>
Book2 Name= PHYSICS, Book2 Pages= 123, Book2 Price 456.789
*/
