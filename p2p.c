// to Demonstrate Pointer to Pointer
#include<stdio.h>
#include<conio.h>
void main()
{
int a=10,*p,**ptr;
clrscr();
p=&a;        // pointer storing address for a
ptr=&p;    // pointer  pointing to the pointer which is storing address a
gotoxy(10,10);
printf("\n The Value of a is %d ",a);
printf("\n %d is stored at address %u ",a,&a);
printf("\n %d is stored at address %u", *p,p);
printf("\n %d is stored at address %u",**ptr,ptr);
getch();
}
