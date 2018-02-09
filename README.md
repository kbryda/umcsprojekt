# umcsprojekt
/*Przekazywanie struktury do funkcji */
#include <stdio.h>
#include <conio.h>
struct CD
{
char name[20];
char description[40];
char category[12];
float cost;
int number;
} disc;
void putdisc(struct CD disk); /* function */
void main()
{
clrscr();
puts("Main function - Data of disk\n");
puts("Enter disk information\n\n");
printf("Enter the name:");
gets(disc.name);
printf("Enter the description:");
gets(disc.description);
printf("Enter the category:");
gets(disc.category);
printf("Enter the cost:");
scanf("%f", &disc.cost);
printf("Enter the slot number:");
scanf("%d", &disc.number);
putdisc(disc);puts("\nMain function");
getch();
} /* main */
void putdisc(struct CD disk) /* function */
{
puts("\nputdisc() function\n");
puts("The information on the CD is:\n\n");
printf("Name: %s\n",disk.name);
printf("Description: %s\n",disk.description);
printf("Category: %s\n",disk.category);
printf("Cost: %6.2f\n",disk.cost);
printf("Location: %d\n",disk.number);
}
# umcsprojekt
# umcsprojekt
