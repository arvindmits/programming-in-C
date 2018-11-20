//Pointer to Array
#include <stdio.h>
#include <conio.h>
void main ()
{
int x[] = { 1,2,3,4,5,6,7,8,9 };
int i, *ptr;
/*Following code is same as &x[0]*/
ptr=x;  // base address of x[] is pointed
for(i=0;i<9;i++)
{
printf("Array Element x[%d] is %d ",i,*ptr);
ptr++;
}
getch();
}
