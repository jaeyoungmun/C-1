#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int result;
    int num1, num2, num3;

    printf("세 개의 정수값 입력:");
    scanf("%d %d %d", &num1, &num2, &num3);
    
    result = (num1-num2)*(num2+num3)*(num3%num1)
    printf("%d * %d * %d = \n", num1-num2, num2+num3, num3%num1);
    return 0;
}