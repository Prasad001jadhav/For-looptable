#include<stdio.h>
#include<conio.h>
int main ()
{
	int no = 15, i = 0;
	
	printf("\n enter a  number = ");
	scanf("%d",&no);
	
	printf(" table for %d is  = ", no);
	
	for (i = 1; i<= 10; i++)
	{
		printf("\n %d ", no*i);
	}
	
	printf("\n\n thanks");
	
	getch();
	return 0;
}
	
	     
	       	
