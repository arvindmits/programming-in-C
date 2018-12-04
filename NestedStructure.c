#include<stdio.h>
#include<conio.h>
struct student
{
char name[10];
int roll_no;
int marks;
};
struct add
{
char email[20];
struct student s;
} ;
void main()
{
struct add a;
clrscr();
gotoxy(10,10);
printf("Enter name ,Roll_no,Marks,Email-address of student Sequentially");
scanf("%s %d %d %s",a.s.name,&a.s.roll_no,&a.s.marks,a.email);
printf("%s ",a.s.name);
printf("\t%d",a.s.roll_no);
printf("\t%d",a.s.marks);
printf("\t%s",a.email);
getch();
}
