#include <stdio.h>
#include <stdlib.h>

void main() {
	unsigned int max = 0x0, min = 0xffffffff, count, input, i;

	printf("Anzahl: ");
	scanf_s("%d", &count);
	printf("\n");

	for (i = 1; i <= count; i++) {
		printf("%d. Zahl: ", i);
		scanf_s("%d", &input);

		if (input > max) {
			max = input;
		} else if (input < min) {
			min = input;
		}
	}
	
	printf("\n");
	printf("Groesste Zahl: %d\n", max);
	printf("Kleinste Zahl: %d\n", min);

	system("pause");
}