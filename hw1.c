#include <stdio.h>

int main()
{
	int and1, or1, xor1;
	int num1, num2;

	printf("Input two integers: ");
	scanf_s("%d %d", &num1, &num2);
	and1 = num1 & num2;
	or1 = num1 | num2;
	xor1 = num1 ^ num2;

	printf(num1, "&", num2, "=", and1);
	printf(num1, "|", num2, "=", or1);
	printf(num1, "^", num2, "=", xor1);
	return 0;
}