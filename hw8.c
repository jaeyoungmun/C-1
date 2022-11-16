#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

float Standard_Deviation(float num[], float aver) {
	float summ = 0.0;
	for (int i = 0; i < 5; i++) {
		summ += pow(num[i] - aver, 2); // 4 1 0 1 4
		//printf("표준편차!!!!!!%f\n", summ);
	}
	return sqrt(summ / 5);
}

int main() {
	float nums[5], aver = 0, sum = 0;
	printf("Enter 5 real numbers: ");
	for (int i = 0; i < 5; i++) {
		scanf("%f", &nums[i]);
		sum += nums[i];
		//printf("nums출력@@@%f\n", nums[i]);
	}
	aver = sum / 5;
	printf("Standard Deviation = %.3f \n", Standard_Deviation(nums, aver));
	return 0;
}