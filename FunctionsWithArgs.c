#include<stdio.h>
#include<conio.h>
void area(float);
void main()
{
float r;
clrscr();
printf("Enter radius of a circle !");
scanf("%f",&r);
area(r);
getch();
}
void area(float r1)
{
float area;
area=3.14*r1*r1;
printf("The Area of Circle is %f ",area);
}
