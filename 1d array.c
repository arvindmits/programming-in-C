/*Program to implement one dimensional array
//Following program receives five values as input from user & print those values to the output screen with respective Memory Address
#include<stdio.h>
#include<conio.h>
void main()
{
float e[5];
int i;
clrscr();
gotoxy(10,10);
printf("Enter Salary of five Employees !");
for(i=0;i<5;i++)
{
scanf("%f",&e[i]);
}
printf("Memory map for the Array Elements !");
for(i=0;i<5;i++)
{
printf("\n The variable e[%d] the value %f at Memory address %u",i,e[i],&e[i]);
}
getch();
}
