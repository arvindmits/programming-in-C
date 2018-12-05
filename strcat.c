#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char name1[15]="Hello ";
char name2[15]="World !";
clrscr();
printf("name1 =%s \t name2=%s",name1,name2);
strcat(name1,name2);
printf("\n After using the String cat Function");
printf("\n String at Name1 is %s ",name1);
getch();
}
