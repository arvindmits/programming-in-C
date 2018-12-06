#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char s1[30] ,s2[30];
int c;
clrscr();
printf("Enter First String");
gets(s1);
printf("Enter Second String");
gets(s2);
c=strcmp(s1,s2);
if(c==0)
printf("The strings are equal");
else
printf("The strings are not equal");
getch();
}
