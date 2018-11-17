/*Dynamically character array initilization*/
#include<stdio.h>
#include<conio.h>
void main()
{
char name[15];
int i;
clrscr();
printf("Enter Your Name");
for(i=0;i<15;i++)
{
scanf("%c",&name[i]);
}
printf("Entered name is ");
}
for(i=0;i<15;i++)
{
printf("%c",&name[i]);
}
getch();
} 
