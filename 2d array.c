//to implement two Dimensional Array
#include<stdio.h>
#include<conio.h>
void main()
{
int x[2][3],i,j;
clrscr();
gotoxy(10,10);
printf("Enter values for Matrix 5x5 !");
for(i=0;i<2;i++) /*Outer for loop for row*/
{
for(j=0;j<3;j++) /*inner for loop for Column*/
{
scanf("%d",&x[i][j]);
}
}
gotoxy(15,15);
printf("The values Entered in Matrix 2x3 are !");
for(i=0;i<2;i++) /*Outer for loop for row*/
{
for(j=0;j<3;j++) /*inner for loop for Column*/
{
printf("\t%d",x[i][j]);
}
}
getch();
}
