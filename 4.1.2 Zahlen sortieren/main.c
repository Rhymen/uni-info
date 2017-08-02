#include <stdio.h>
#include <stdlib.h>

void bubblesort(int *number, int length) {
	int i, j, temp;

	for (i = 0; i < length; i++) {
		for (j = i; j < length; j++) {
			if (number[j] < number[i]) {
				temp = number[j];
				number[j] = number[i];
				number[i] = temp;
			}
		}
	}
}

void main() {
	int i, number[10];

	for (i = 0; i < 10; i++) {
		printf("Geben Sie die %d. Zahl ein: ", i + 1);
		scanf("%d", &number[i]);
	}

	bubblesort(number, 10);

	for (i = 0; i < 10; i++) {
		printf("%d; ", number[i]);
	}

	printf("\n");
	system("pause");
}