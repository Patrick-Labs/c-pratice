#include<stdio.h>


void d()
{
	int a;char b;
	printf("please enter your score\n");
	scanf_s("%d", &a);
	switch (a / 10)
	{
	case 10:
	case 9:b = 'A';
		break;
	case 8:b = 'B';
		break;
	case 7:b = 'C';
		break;
	case 6:b = 'D';
		break;
	default:
		b = 'E';
	}

	printf("your score's grade is %c\n", b);
}