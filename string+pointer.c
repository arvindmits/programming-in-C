//to implement Array of pointers to string
#include <stdio.h>
#include <conio.h>
void main ()
{

char *names [4] = {

"John",

"Farell",

"Neo ",

"Sam",

};
int i = 0;
clrscr();
for ( i = 0; i < 4; i++)
{
printf("Value of names[%d] = %s\n", i, names[i] );
}
getch();
}
