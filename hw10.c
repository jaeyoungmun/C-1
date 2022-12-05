#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> 
#include <time.h>
#include <string.h>

typedef struct city {
	char name[20];
	char country[20];
	char pop[20];
}City;

int main() {
	City arr[3];
	printf("Input three cities:\n");
	for (int i = 0; i < 3; i++) {
		printf("Name> ");
		fgets(arr[i].name,sizeof(arr[i]),stdin);
		printf("Country> ");
		fgets(arr[i].country, sizeof(arr[i].country), stdin);
		printf("Population> ");
		fgets(arr[i].pop, sizeof(arr[i].pop), stdin);
		// printf("nnn");
	}
	printf("\nPrinting the three cities:\n");
	for (int i = 0; i < 3; i++) {
		arr[i].name[strlen(arr[i].name) - 1] = 0;
		arr[i].country[strlen(arr[i].country) - 1] = 0;
		arr[i].pop[strlen(arr[i].pop) - 1] = 0;
	}
	for (int i = 0; i < 3; i++) {
		printf("%d. %s in %s with a population of %s people\n",
			i+1, arr[i].name, arr[i].country, arr[i].pop);
	}
	return 0;
}