//to demonstrate declaration ,initilization of pointers
#include<stdio.h>
#include<conio.h>
void main()
{
int a=10,b,*p;
clrscr();
p=&a;
b=*p;
gotoxy(10,10);
printf("\nThe Value of a is %d ",a);
printf("\n%d is stored at address %u ",a,&a);
printf("\n%d is stored at address %u", *p,p);
printf("\n%d is stored at address %u",b,&b);
printf("\n The value of b is %d ",*(&b));
getch();
}
