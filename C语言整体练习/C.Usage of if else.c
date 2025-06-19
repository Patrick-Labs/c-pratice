#include <stdio.h>

int c()
{
	float s;
	printf("Please type your score\n");
	scanf_s("%f", &s);
	printf("your score is %f\n", s);
	if (s >= 90)
	{
		printf("your grade is A\n");
	}
	else if (s >= 80)
	{
		printf("g is B\n");
	}
	else if (s >= 70)
	{
		printf("g is c ");
	}
	else if (s >= 60)
	{
		printf("g is d");
	}
	else
	{
		printf("g is e");
	}
	return 0;
}

