#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Rescu(int bina) {

	if (bina > 0) {
		Rescu(bina / 2);
		printf("%d", bina % 2);
	}

}

int main() {
	int num;

	printf("Please enter a number: ");
	scanf("%d",&num);

	if (num > 0){
		printf(Rescu(num));
	}

	return 0;
}