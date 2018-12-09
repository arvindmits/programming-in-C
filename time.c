// to read current time
#include <stdio.h>
#include <conio.h>
#include <dos.h>
void main()
{
struct dostime_t t;
_dos_gettime(&t);
clrscr();
printf("The current time is: %2d:%02d:%02d.%02d\n",t.hour,t.minute,t.second,t.hsecond);
getch();
}


// to set time
#include <stdio.h>
#include <conio.h>
#include <dos.h>
void main()
{
struct dostime_t st;
st.hour = 19;    
st.minute = 0;
st.second = 0;
st.hsecond = 0;
//this function doesnt change actual time because these are old functions which interacts with system based on 
DOS functions and there may be an update in the windows system about time management system
printf("Setting time to 5 PM.\n");
_dos_settime(&st);
system("time");
getch();
}
