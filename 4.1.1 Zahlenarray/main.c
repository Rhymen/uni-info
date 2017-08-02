#include <stdio.h>
#include <stdlib.h>

void main() {
	int i, number[10];

	for (i = 0; i < 10; i++) {
		printf("Geben Sie die %d. Zahl ein: ", i + 1);
		scanf("%d", &number[i]);
	}

	i = 0;
	for (;;) {
		printf("Welche Zahl soll ich ausgeben: ", i + 1);
		scanf("%d", &i);

		if (i < 1 || i > 10) {
			return;
		}

		printf("Die %d. Zahl ist %d\n", i, number[i - 1]);
	}
}