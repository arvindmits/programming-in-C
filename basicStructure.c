#include<stdio.h>
#include<conio.h>
struct student
{
char name[10];
int roll_no;
int marks;
};
void main()
{
struct student s1;
gotoxy(27,27);
printf("Enter the Name,Roll No. and marks of student");
scanf("%s %d %d ",&s1.name,&s1.roll_no,&s1.marks);
gotoxy(25,25);
printf("%s %d %d ",s1.name,s1.roll_no,s1.marks);
getch();
}
