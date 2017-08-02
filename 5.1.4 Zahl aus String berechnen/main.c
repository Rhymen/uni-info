#include <stdio.h>
#include <stdlib.h>

int parseString(char *string) {
	int i, parsed;

	for (i = parsed = 0; string[i]; i++) {
		parsed = 10 * parsed + (string[i] - '0');
	}

	return parsed;
}

void main() {
    char string[100], character;

    printf("Zeichenkette: ");
    scanf("%s", string);
    printf("%i\n", parseString(string));

	system("pause");
}