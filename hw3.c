#include <stdio.h>

int main()
{
	int i, j, k = 0;

	for (i = 0; i < 5; i++)
	{
		for (k = 1; k < 5-i; k++)
			printf(" ");
		for (j = 1; j < i + 4;)
		{
			printf("*");
			j +=2;
		}
		for (k = 1; k < 5 - i; k++)
			printf(" ");
		printf("1");
		printf("\n");
	}
	return 0;
}
