#include<stdio.h>
#include<conio.h>
float area(float);
void main()
{
float r,result;
clrscr();
printf("Enter the Radius of Circle ");
scanf("%f",&r);
result = area(r);
printf("The Area of Circle is %f",result);
getch();
}
float area(float r)
{
float area;
area=3.14*r*r;
return area;
}
