#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int A;
	int rest;

	printf("Plesae enter a number: ");
	scanf("%d", &A);

	for (int i = 2; i <= A; i++) {
		rest = A % i;
		if (rest == 0){
			if (i == A) 
				printf("It is a prime number.");
			else {
				printf("It is not a prime number.");
				break;
			}
		}
	}
	return 0;
}