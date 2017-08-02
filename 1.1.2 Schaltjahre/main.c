#include <stdio.h>
#include <stdlib.h>

void main() {
	int input = 1;

	printf("\"0\" zum Beenden des Programmes eingeben \n");

	while (input != 0) {
		printf("Bitte Jahreszahl zum Testen eingeben: ");
		scanf_s("%d", &input);

		if ((input % 4 == 0 && input % 100 != 0) || input % 400 == 0) {
			printf("%d ist ein Schaltjahr.\n", input);
		} else {
			printf("%d ist kein Schaltjahr.\n", input);
		}
	}
}