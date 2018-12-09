// for date reading
#include<stdio.h>
#include<conio.h>
#include<dos.h>  //consists of date, time informations which have been pre-difined
void main()
{
struct dosdate_t d; 
_dos_getdate(&d);  // the purpose of this function is to read current date & time and return struct memb i.e dd,mm,yy
clrscr();
printf("The current year is: %d\n", d.year);
printf("The current day is: %d\n", d.day);
printf("The current month is: %d\n", d.month);
getch();
}


// for date setting
#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
{
struct dosdate_t sd;
sd.year = 2017;
sd.day = 10;
sd.month = 12;
printf("setting date to 10/12/17 .");  // after compiling just check out your system date to know the difference
_dos_setdate(&sd);
system("date");
getch();
}

