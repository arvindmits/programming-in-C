//to Demonstrate arithmatic operations with pointers
#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,d,*p,*t;
clrscr();
a=12;
b=42;
p=&a;
t=&b;
c=*p + *t;
d=*p - *t;
gotoxy(2,10);
printf("Address of a =%u\n",p);
printf("Address of b =%u\n",t);
printf("The value of a =%d and b =%d \n",a,b);
printf("The addition of a & b c=%d \n",c);
printf("The substraction of a & b is %d ",d);
getch();
}
