program to find the smallest of some random 3 numbers and later storing the smallest one and printing it
#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,s;
clrscr();
gotoxy(10,10);
printf("Enter the Values for a,b and c Respectively ");
scanf("%d %d %d",&a,&b,&c);
if(a<b)
{
if(a<c)
s=a;
else
s=c;
}
else
{
if(a<c)
s=b;
else
s=c;
}
printf("The smallest value is %d",s);
getch();
}
