#include<stdio.h>
int marks;
void main()
{
	printf("enter marks");
	scanf("%d", &marks);
	if (marks<40)
	{
		printf("failed");
	}
	if (marks>40 && marks<50)
	{
	printf("C grade");	
	}
	if (marks>50 && marks<60)
	{
	printf("B grade");	
	}
	if (marks>60 && marks<75)
	{
	printf("A grade");	
	}
	else
	{
		printf("NA");
		}	
}
