#include <stdio.h>

int main()
{
	int emy = 5;

	for (int i = 0; i < emy; i++)
	{
		for (int j = emy - 1; j > i + 1; j--)
		{
			printf(" ");
		}
		for (int j = 0; j < 2 * i + 1; j++)
			printf("*");
		printf("\n");
	}
	return 0;
}