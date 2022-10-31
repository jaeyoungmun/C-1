#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int num[5];
	int odd, even;

	printf("Please input five integers: ");
	for (int i = 0; i < 5; i++) {
		scanf("%d", &num[i]);
	}
	printf("\nOdd numbers:");
	for (int i = 0; i < 5; i++) {
		if ((num[i]) % 2 != 0) {
			odd = num[i];
			printf("%d ", odd);
		}
	}

	printf("\nEven numbers:");
	for (int i = 0; i < 5; i++) {
		if ((num[i]) % 2 == 0) {
			even = num[i];
			printf("%d ", even);
		}
	}

	return 0;
}