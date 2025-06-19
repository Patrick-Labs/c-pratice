#include<stdio.h>
extern int d(), b(), c(),e();

void main()
{
	char num;
	printf("please choose the project number\n");
	scanf_s("%c", &num,1);
	if (num == 'b')
	{
		 b();
	}
	else if( num=='c')
	{
		c();

	}
	else if (num == 'd')
	{
		d();
	}
	else if (num == 'e')
	{
		e();
	}
	else 
	{
		printf("Can't find project\n");
	}
	
}