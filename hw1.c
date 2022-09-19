#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int and1, or1, xor1;
    int num1, num2, num3;

    printf("Input two integers:");
    scanf("%d %d", &num1, &num2);

    and1 = num1 & num2;
    or1 = num1 | num2;
    xor1 = num1 ^ num2;

    printf("%d & %d = %d \n", num1, num2, and1);
    printf("%d | %d = %d \n", num1, num2, or1);
    printf("%d ^ %d = %d \n", num1, num2, xor1);
    return 0;
}