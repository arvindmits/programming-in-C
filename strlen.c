#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
int c;
char name[25];
clrscr();
printf("Enter Your Name :");
gets(name);
c=strlen(name);
printf("Lenght of the String [ %s ] is = %d ", name ,c );
getch();
}
