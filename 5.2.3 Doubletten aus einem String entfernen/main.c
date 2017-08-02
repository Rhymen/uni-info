#include <stdio.h>
#include <stdlib.h>

void removeDoublets(char *string) {
	char *ps = string;
	char character = 0;

	while (*ps) {
		*string = *ps++;
		if (*string != character) {
			character = *string;
			string++;
		}
	}

	*string = 0;
}

void main() {
    char string[100];
	int i;

    printf("Zeichenkette: ");
    scanf("%s", string);

	removeDoublets(string);
	printf("%s\n", string);

	system("pause");
}