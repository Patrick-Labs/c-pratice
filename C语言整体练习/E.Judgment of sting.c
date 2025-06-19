#include<stdio.h>
#include<string.h>

int judge(char* a)
{
	int i, n;
	char s[] = "abcdefg";
	if (strcmp(s, a) == 0) { printf("You found the secret string!\n"); }
	n = strlen(a);
	if (n < 2) { return 2; }
	{
		for (i = 0; i < n - 1; i++)
		{
			if (a[i] != a[i + 1] - 1)
			{
				return 1;
			}
		}
		return 0;
	}
}
void e()
{
	char a[30]; int b=0;
	printf("please enter a string\n");
	int c;
	while ((c = getchar()) != '\n' && c != EOF);//把缓冲区的字全部读完到c直到读玩回车
	fgets(a, 30, stdin);
	int len = strlen(a);
	if (len > 0 && a[len - 1] == '\n') { a[len - 1] = '\0'; }//fgets语句最后会读入换行所以要清除改成/0.
	printf("%s", a);
	b = judge(a);
	if (b == 1) { printf("This string isn't  a consecutive string"); }
	else if (b == 2) { printf("The input isn't a string\n"); }
	else { printf("This string is a consecutive string"); }
}
