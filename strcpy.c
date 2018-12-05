#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char name1[15]="Hello";
char name2[15];
clrscr();
gotoxy(10,10);
printf("String at Name1 is %s",name1);
gotoxy(15,15);
puts("Enter New String :");
gets(name2);
strcpy(name1,name2);
printf("\n After using the String Copy Function");
printf("\n Now String at Name1 is %s ",name1);
getch();
}
