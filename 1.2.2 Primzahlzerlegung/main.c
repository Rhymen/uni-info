#include <stdio.h>
#include <stdlib.h>

void main() {
	int input, i;

	printf("Zahl: ");
	scanf_s("%d", &input);

	for (i = 2; i <= input ; i++) {
		if (input % i == 0) {
			printf("%d", i);
			input = input / i;

			if (input > 1) {
				printf(" * ");
			}

			i = 1;
		}
	}
	printf("\n");

	system("pause");
}